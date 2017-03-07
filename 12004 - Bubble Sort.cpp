#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,test,cases=1;
    scanf("%lld",&test);
    while(test--)
    {
        scanf("%lld",&n);
        long long int  i=n*(n-1)/2;
        if(i%2==0)
            printf("Case %lld: %lld\n",cases++,i/2);
        else
            printf("Case %lld: %lld/2\n",cases++,i);
    }
    return 0;
}

