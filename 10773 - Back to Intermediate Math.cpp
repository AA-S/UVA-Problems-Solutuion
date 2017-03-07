#include<bits/stdc++.h>

using namespace std;

int main()
{
    double d,v,u,cosA,tanA,t1,t2,lobdhi1,lobdhi2,dis,A;
    int test;
    scanf("%d",&test);

    for(int cases=1; cases<=test; cases++)
    {
        t1=0,t2=0;
        scanf("%lf%lf%lf",&d,&v,&u);
        cosA = -(1.0*v/u);
        lobdhi1 = sqrt(v*v+u*u+2*v*u*cosA);
        t1= (double)(d/lobdhi1);

        lobdhi2 = sqrt(v*v+u*u);
        tanA = (double)(u/v);
        dis = (double)d/tanA;
        dis = sqrt(d*d+dis*dis);
        // A = taninverse(tanA);

        t2 = (double)dis/lobdhi2;

        if(v>=u || v==0 || u==0)
        {
            printf("Case %d: can't determine\n",cases);
        }
        else if(d==0)
        {
             printf("Case %d: 0.000\n",cases);
        }
        else
            printf("Case %d: %.3lf\n",cases,abs(t1-t2));
    }
    return 0;
}

