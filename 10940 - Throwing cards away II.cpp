#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    // freopen("out.txt","w",stdout);
    int n,val,mx,mi,diff,m;
    while(scanf("%d",&n) && n!=0)
    {
        m = ceil(log(n)/log(2));
        diff = pow(2,m) - n;
        cout << pow(2,m)-diff*2 << endl;
        //printf("%d\n",);

    }

    return 0;
}
