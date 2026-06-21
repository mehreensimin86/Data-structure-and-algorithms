#include<stdio.h>
int main()
{
    int i,pos,item;
    int arr[100];
    int n;
    printf("enter elements number:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter position:");
    scanf("%d",&pos);
    printf("enter item");
    scanf("%d",&item);
    for (i=n-1;i<pos-1;i++)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=item;
    printf("enter new array");
    for (i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;

}
