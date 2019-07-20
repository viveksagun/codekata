#include<stdio.h>
void main()
{
    int i,l,fact=1;
    scanf("%d",&l);
    for(i=l;i>0;i--)
    {
        fact=fact*i;
    }
printf("%d",fact);
}
