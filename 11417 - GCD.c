#include<stdio.h>
long int gcd(long int,long int );
int main()
{
    long int i,j,n,m,d;
    while(scanf("%ld",&n)!=EOF)
    {
        d = 0;
        if(n != 0)
        {
            for(i = 1 ; i < n ; i++)
           {
              for(j = i+1 ; j <= n ; j++)
               d = d + gcd(i,j);
            }
            printf("%ld\n",d);
        }
    }
    return 0;
}
long int gcd(long int a,long int b)
{
   while(b!=0)
    {
        a=a%b;
        if(a==0)
        {
            return b;
        }
        b=b%a;
    }
    return a;
}
