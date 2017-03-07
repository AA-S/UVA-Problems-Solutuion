#include<stdio.h>
int main()
{
    int test,cases,n,k,p,i,j,a,b,reminder;
    scanf("%d",&test);

    for(cases=1;cases<=test;cases++)
    {
        scanf("%d%d%d",&n,&k,&p);
        if(p>=n)
        {
            reminder=p%n;
            a=k+reminder;
            if(a>n)
                a=a-n;
        }
        else
        {
            a=k+p;
            if(a>n)
            a=a-n;
        }

        printf("Case %d: %d\n",cases,a);
    }
    return 0;
}
