#include<stdio.h>
struct A{
    char a[100];
};
void main()
{
   int n,i,j,count,c=0;
   struct A a1[100];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%s",a1[i].a);
   }
   for(i=0;i<n;i++)
   {
       count=0;
       for(j=1;j<n;j++)
       {
           if(a1[0].a[i]==a1[j].a[i])
           {
               count++;
               c++;
           }
           else
           {
               break;
           }
       }
   }   
   
           if(count==(n-1))
           {
               for(i=0;i<=c;i++)
               {
                   printf("%c",a1[0].a[i]);
               }
           }
}
