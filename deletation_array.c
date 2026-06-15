#include<stdio.h>
int main()
{
    int n,arr[100],i,pos,value;
    printf("enter elements number:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter insert array position: ");
    scanf("%d",&pos);
    printf("enter value:");
    scanf("%d",&value);
    for (i=n;i<=pos;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[pos+1]=value;
    n++;
    printf("udated array:");
    for (i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;

}



