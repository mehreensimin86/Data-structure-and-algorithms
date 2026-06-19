#include<stdio.h>
int main()
{
    int n,i,j,minimum;
    int arr[100];
    printf("enter elements number:");
    scanf("%d",&n);
    printf("enter elements:");
    for (i=0;i<n;i++)
    {
       scanf("%d",&arr[i]);
    }
    //selection sorting
    for(i=0;i<n-1;i++)
    {
         minimum=i;
        for( j=i+1;j<n;j++)
        {
            if (arr[j]<arr[minimum])
            {
                minimum=j;
            }
        }

    int temp=arr[i];
    arr[i]=arr[minimum];
    arr[minimum]=temp;
    }

    printf("sorted array:");
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}
