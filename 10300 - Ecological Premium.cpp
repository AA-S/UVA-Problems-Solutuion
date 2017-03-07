#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int test,far,l,a,p,tot;
    scanf("%d",&test);

    for(int cases=1;cases<=test;cases++)
    {
        double total = 0;
        scanf("%d",&far);
        for(int i=0;i<far;i++)
        {
            scanf("%d%d%d",&l,&a,&p);

            total += (l*1.0/a)*(a*p);
        }
        tot = total;
        printf("%d\n",tot);
    }
    return 0;
}
