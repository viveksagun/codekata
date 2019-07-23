#include<stdio.h>
void main()
{
    int n,i,a[100],j,temp=0,v=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            v++;
        }
    }
    if(v==(n-1))
    {
        printf("%d",a[0]);
    }
    else
    {
        for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;j++)
        {
                if(a[i]<a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
                
        }
        printf("%d",a[i]);
        }
    }
}
