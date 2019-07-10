#include<stdio.h>
void main()
{
    int N;
    scanf("%d",&N);
    if(N%4==0||N%100==0)
    {
        printf("leap year");
    }
    else
    {
        printf("not leap");
    }
}
