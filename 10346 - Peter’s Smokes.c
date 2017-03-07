# include<stdio.h>
int main()
{
    long long int n,tot=0,rem,i,j,k;
    while(scanf("%lld%lld",&n,&k)!=EOF)
    {
        tot=n;
        while(n>=k)
    {
        rem=n%k;
        i=n/k;

        tot=tot+i;
        n=rem+i;

    }
    printf("%lld\n",tot);
    }

   return 0;

}
