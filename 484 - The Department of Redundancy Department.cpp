#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int n,key[500000],i=0;
    map<int,int> m;
    while(scanf("%d",&n)!=EOF)
    {
        if(m.count(n) ==0)
        {
            m.insert(pair<int,int>(n,1));
            key[i++] = n;
        }
        else
            m[n]++;
    }

    for(int j=0;j<i;j++)
        cout << key[j] << " " << m[key[j]] << endl;

    return 0;
}
