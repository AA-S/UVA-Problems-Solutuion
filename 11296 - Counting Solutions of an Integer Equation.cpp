//#include<bits/stdc++.h>
#include<stdio.h>
//using namespace std;

int main()
{
    long long int n;
    while(scanf("%lld",&n)!=EOF)
    {
        long long int  i=n/2+1;
        printf("%lld\n",i*(i+1)/2);
    }
    return 0;
}
