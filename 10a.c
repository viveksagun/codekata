#include<stdio.h>
void main()
{
    int N,count=0;
    scanf("%d",&N);
    while(N)
    {
       N/=10;
       count++;
    }
    printf("%d",count);
   
}
