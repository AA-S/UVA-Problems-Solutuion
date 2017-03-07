#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,sum,starting,ending,i,j;
    while(scanf("%lld",&n)!=EOF)
    {
        i = n/2;
        starting = n*i-i+1;
        ending  = starting + n*2-2;

        printf("%lld\n",3*ending-6);
    }
    return 0;
}
