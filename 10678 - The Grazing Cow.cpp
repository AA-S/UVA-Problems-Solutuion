#include<bits/stdc++.h>

using namespace std;

int main()
{
    double d,l,area,a,b;
    int test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lf%lf",&d,&l);
        a= (double) l/2;
        b = (double) sqrt((l*l-d*d)/4.0);
        area = (double)2.0*acos(0)*a*b;
        printf("%.3lf\n",area);
    }
    return 0;
}
