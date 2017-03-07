# include<stdio.h>
int main()
{
    int n,tot,rem,i,j,k,test,cases,p,q;
    scanf("%d",&test);
    for(cases=1;cases<=test;cases++)
    {
        scanf("%d%d%d",&q,&p,&k);
    {
        n=p+q;
        tot=0;
        while(n>=k)
    {
        rem=n%k;
        i=n/k;

        tot=tot+i;
        n=rem+i;

    }
    printf("%d\n",tot);
    }

    }

   return 0;

}
