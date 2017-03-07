#include<stdio.h>
#include<math.h>
int main()
{
    long long int y,cases=1;
    double x,a,b,i,j;
    while(scanf("%lld",&y))
    {
        if(y==0)
            break;
        a=sqrt(9+8*y);
        x=(3+a)/2;
            printf("Case %lld: %.0lf\n",cases++,ceil(x));
    }
    return 0;

}
