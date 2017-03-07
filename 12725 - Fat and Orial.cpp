#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    double n,m,tn,tm,avg;
    int a,b,test,cases;
    scanf("%d",&test);

    for(cases=1;cases<=test;cases++)
    {
        scanf("%lf%lf%d%d",&n,&m,&a,&b);
        avg = (m*(a+b) - n*a)*1.0/b;
        if(avg<=10 && avg>=0)
            printf("Case #%d: %.2lf\n",cases,avg);
        else
            printf("Case #%d: Impossible\n",cases);
    }

    return 0;
}
