#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,l1,l2;
    double x,m;
    while(scanf("%d",&n) && n!=0)
    {
        l1 = floor(log(n));
        l2 = ceil(log(n));

        x = 1 - exp(log(n) - l1);
        if(x>-1)
            printf("%d %.8lf\n",l1,x);
        else
            printf("%d %.8lf\n",l2,1 - exp(log(n) - l2));
    }

    return 0;
}
