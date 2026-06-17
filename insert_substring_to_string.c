#include<stdio.h>
#include<string.h>
int main()
{
    char text[500];
    char pattern[200];
    printf("enter main string:");
    scanf("%s",text);
    printf("enter substring:");
    scanf("%s",pattern);
    int i, pos;
    printf("enter position to insert");
    scanf("%d",&pos);
    int len1=0;
    int len2=0;
    while (text[len1]!='\0')
    {
        len1++;
    }
    while (pattern[len2]!='\0')
    {
        len2++;
    }
    for(i=len1;i>=pos;i--)
    {
        text[i+len2]=text[i];
    }
    for(i=0;i<len2;i++)
    {
        text[pos+i]=pattern [i];
    }
    printf("new string %s",text);

    return 0;
}
