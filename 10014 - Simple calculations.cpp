#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    //freopen("out2.txt","w",stdout);
    int test,cases=1,n;
    double a0,an_1,sum,a1,c;
    scanf("%d",&test);
    for(int cases=1; cases<=test; cases++)
    {
        sum=0;
        scanf("%d",&n);
        scanf("%lf%lf",&a0,&an_1);
        for(int i=2*n; i>0; i -=2)
        {
            scanf("%lf",&c);
            sum += i*c;
        }
        float res = 1.0*(an_1+n*a0-sum)/(n+1.0);
        printf("%0.2f\n",res);
        if(cases!=test)
            printf("\n");
    }
    return 0;
}
