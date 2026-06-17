#include<stdio.h>
int main()
{
    int i,n;
    int arr[100];
    printf("enter number of elements:");
    scanf("%d",&n);
    printf("enter sorted elements:");
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int key;
    printf("enter elements to search:");
    scanf("%d",&key);
    int low =0;
    int high = n-1;
    int mid,found;
    for (;low<=high;)
    {
        mid=high+low/2;
        if(arr[mid]==key)
        {
            found=1;
            break;
        }
        else if (key<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if (found)
    {
        printf("elements found");
    }
    else
    {
        printf("elements not found");
    }
    return 0;
}
