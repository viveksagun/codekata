#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int i,j,l;
    scanf("%[^\n]",a);
    l=strlen(a);
    for(i=l;i>0;i--)
    {
      printf("%c",a[i]);   
    }
}
