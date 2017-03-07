#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,test,cases,row;
    scanf("%d",&test);

    for(cases=1;cases<=test;cases++)
    {
        row = 0;
        scanf("%d",&n);
        int age[n+5];
        for(int i=0;i<n;i++)
            scanf("%d",&age[i]);
        row = age[n/2];
        printf("Case %d: %d\n",cases,row);
    }
    return 0;

}

