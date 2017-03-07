#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int test,n,counter,a,p,tot,m;
    scanf("%d",&test);

    for(int cases=1;cases<=test;cases++)
    {
        scanf("%d",&n);
        tot = n;
        counter=0;
        while(1)
        {
            m =log(n)/log(2);
            p =n - pow(2,m);
            tot = p * 2 +1;
            counter++;
            if(n==tot)
            {
                printf("Case %d: %d %d\n",cases,counter-1,tot);
                break;
            }

            else
                n=tot;
        }
    }
    return 0;
}
