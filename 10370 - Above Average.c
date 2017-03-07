#include<stdio.h>
int main()
{
    long int test,cases,n;
    scanf("%ld",&test);
    for(cases=1;cases<=test;cases++)
    {
        scanf("%ld",&n);
        long long int sum=0,num[n],a=0,i,j;
        double avg,per;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&num[i]);
            sum=sum+num[i];
        }
        avg=(double)sum/n;
        for(i=0;i<n;i++)
            if(num[i]>avg)
            a++;

        per=(double)(a*100)/n;

        printf("%.3lf%c\n",per,'%');
    }
    return 0;
}
