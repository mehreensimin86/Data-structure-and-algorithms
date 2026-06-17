#include<stdio.h>
int main()
{
    int i,n;
    int arr[100];
    printf("enter elements number:");
    scanf("%d",&n);
    printf("enter elements in array");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key,found=0;
    printf("enter elements to search:");
    scanf("%d",&key);
    for (i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            printf("found elements at position %d ",i+1);
            found=1;
            break;
        }
    }
    if (found==0)
    {
        printf("elements not found");
    }
    return 0;
}
