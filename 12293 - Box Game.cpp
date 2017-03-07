#include<bits/stdc++.h>

using namespace std;

bool winnerBob(int n)
{
    if(pow(2,ceil(log(n)/log(2)))-1==n)
            return true;
    return false;
}

int main()
{
    int n;
    while(scanf("%d",&n) && n!=0)
    {
        if(winnerBob(n))
            printf("Bob\n");
        else
            printf("Alice\n");
    }
    return 0;
}
