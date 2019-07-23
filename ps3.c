#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],b[100];
    int i,j,count=0,c=0;
    scanf("%s%s",a,b);
    
    for(i=0;b[i]!='\0';i++)
    {
        if(a[i]==b[i])
        {
            c++;
        }
        else
        {
            count++;
        }
    }
    printf("%d",count);
}
