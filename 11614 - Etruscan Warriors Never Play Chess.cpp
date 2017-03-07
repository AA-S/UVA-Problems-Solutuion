#include<bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long long int n,test,cases,row;
    scanf("%llu",&test);

    for(cases=1;cases<=test;cases++)
    {
        row = 0;
        scanf("%llu",&n);
        row = (sqrt(1+8*n)-1)/2;
        printf("%llu\n",row);
    }
    return 0;

}
