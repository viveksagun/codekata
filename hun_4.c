#include <stdio.h>
void main()
{
    int n,i,rem,tot=0;
    scanf("%d",&n);
    while(n)
    {
        rem=n%10;
        n=n/10;
        tot=tot+(rem*rem);
    }
    printf("%d",tot);
}


