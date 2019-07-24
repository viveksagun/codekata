#include<stdio.h>
void main()
{
    int a,b,i,j,count=0,v[100],k[100];
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        scanf("%d",&v[i]);
    }
    for(i=0;i<b;i++)
    {
        scanf("%d",&k[i]);
    }
    for(i=0;i<a||i<b;i++)
    {
        if(v[i]==k[i])
        {
            count=count+2;
        }
    }
    printf("%d",count);
}
