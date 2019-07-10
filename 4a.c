#include <stdio.h>
void main()
{
    char n;
    int i;
    char a[26]={'a','b','c','d','e','j','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','f'};
    scanf("%c",&n);
    for(i=0;i<100;i++)
    {
        if(a[i]==n)
        {
            printf("Alphabet");
            break;
        }
        else
        {
            printf("No");
            break;
        }
    }
   
}
