#include<stdio.h>
int main()
{
    long long int a,b,c,i,j,n;
    while(scanf("%lld",&n))
    {
        a=1;
        b=0;
        if(n==0)
            break;
        for(i=1;i<=n+1;i++)
        {
            b=b+a;
            a=b-a;
        }
        printf("%lld\n",b);
    }
    return 0;
}
