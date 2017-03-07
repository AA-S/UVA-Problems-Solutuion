#include<stdio.h>
int main()
{
    long int a,b,n,i,j,sum;
    scanf("%ld",&n);
    if(n>=1&&n<=100)
    {
        for(i=1;i<=n;i++)
        {
            sum=0;
            scanf("%ld%ld",&a,&b);
            if(a>=0&&a<=b)
               {
                   if(b>=a&&b<=100)
                   {
                       for(j=a;j<=b;j++)
                      {
                       if(j%2==1)
                            sum=sum+j;
                      }
                   }

               }
               printf("Case %ld: %ld\n",i,sum);

        }
        return 0;

    }

}
