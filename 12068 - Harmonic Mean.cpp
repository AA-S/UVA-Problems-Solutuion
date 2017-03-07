#include<bits/stdc++.h>

using namespace std;

unsigned long long int gcd(unsigned long long int a,unsigned long long int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}

int main()
{
    int test;
    scanf("%d",&test);

    for(int cases=1; cases<=test; cases++)
    {
        unsigned long long int n;
        scanf("%llu",&n);
        unsigned long long int arr[n+5];
        unsigned long long int lcm=1,rem,nominator,denominator=0;
        for(int i=0;i<n;i++)
        {
            scanf("%llu",&arr[i]);
            lcm = lcm * arr[i] / gcd(lcm,arr[i]);
        }

        nominator = lcm*n;
        for(int i=0;i<n;i++)
        denominator = denominator + lcm/arr[i];
        rem = gcd(nominator,denominator);
        printf("Case %d: %llu/%llu\n",cases,nominator/rem,denominator/rem);
    }

    return 0;
}
