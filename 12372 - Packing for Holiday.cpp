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

        scanf("%d%d%d",&l,&a,&p);

        if(l<=20 && a<=20 && p<=20)
        printf("Case %d: good\n",cases);
        else
            printf("Case %d: bad\n",cases);
    }
    return 0;
}

