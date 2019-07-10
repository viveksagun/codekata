#include <stdio.h>
void main()
{
    char n;
    int i,j;
    char  a[5]={'a','e','i','o','u'};
    char b[22]={'b','c','d','j','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z','f'};
    scanf("%c",&n);
    for(i=0;i<100;i++)
    {
        if(a[i]==n)
        {
            printf("vowels");
            break;
        }
        if(b[i]==n)
        {
            printf("consonents");
            break;
        }
    }
        if(a[i]!=n&&b[i]!=n)
        {
            printf("invalid");
        }
    
}
