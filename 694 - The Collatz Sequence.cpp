#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
    long long int A,A1,L,term=0,cases=1;
    while(scanf("%lld%lld",&A,&L))
    {
        A1=A;term=0;
        if(A<0 && L <0)
            break;
        while(true)
        {
            term++;
            if(A==1)
                break;
            else if(A%2)
            {
                A=A*3+1;
                if(A>L) break;
            }
            else
                A=A/2;

        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",cases++,A1,L,term);
    }
    return 0;
}
