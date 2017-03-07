#include <stdio.h>
int main()
{
   int i,t;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
   {
       int s,m,a,b;
       scanf("%d%d",&s,&m);
       if(s>=m)
       {
           a=(s+m)/2;
           b=s-a;
           if(a+b==s&&a-b==m)
           {
               printf("%d %d\n",a,b);
           }
           else
            printf("impossible\n");
       }
       else
       printf("impossible");

   }
   return 0;
}
