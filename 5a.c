#include<stdio.h>
void main()
{
    int n,i,a[50],b=0,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
        if(a[i]>a[j])
        {
            b=a[i];
            a[i]=a[j];
            a[j]=b;
            
        }
    }
    }
    printf("%d",b);
}
