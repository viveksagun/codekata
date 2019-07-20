#include<stdio.h>
#include<stdio.h>
void main()
{
    char a[100];
    int i,l;
    scanf("%s",a);
    l=strlen(a);
    for(i=l;i>=0;i--)
    {
        printf("%c",a[i]);
    }

}
