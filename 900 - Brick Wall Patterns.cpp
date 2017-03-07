#include<bits/stdc++.h>

using namespace std;

long long int pattern(int n)
{
    unsigned long long int a,b,c,d;
    b=0,
    c=1;
    for(int a=1; a<=n+2; a++)
    {
        b=c+b;
        c=b-c;

    }
    return c;
}
int main()
{
    int n;

    while(scanf("%d",&n) && n!=0)
    {
        printf("%lld\n",pattern(n));
    }
    return 0;
}
