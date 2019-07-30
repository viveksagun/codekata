#include<stdio.h>
void main()
{
    int n,i,j,k=0,flag,a=2,sum=0,count=0,v[50],temp=0;
    scanf("%d",&n);
    while(a<n)
    {
        flag=0;
        for(i=2;i<=a/2;i++)
        {
            
            if(a%i==0)
            {
                flag=1;
                
            }
        }
        if(flag==0)
        {
            v[k]=a;
            k++;
            
        }
        a++;
    }
            for(i=0;i<k;i++)
            {
                for(j=i;j<k;j++)
                {
                    if((v[i]+v[j])==n)
                    {
                        count++;
                    }
                }
            }
        
        
    
    printf("%d",count);
}
