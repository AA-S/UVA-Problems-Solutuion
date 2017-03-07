#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k,n,m,x,y;
    while(scanf("%d",&k) && k!=0)
    {
        cin >> n >> m;
        for(int i=1;i<=k;i++)
        {
            cin >> x >> y;

            int x1,y1;
            x1 = x- n;
            y1 = y - m;

            if(x1==0||y1==0)
                cout << "divisa";
            else if(x1>0&&y1>0)
                cout << "NE";
            else if(x1>0 && y1<0)
                cout << "SE";
            else if(x1<0 && y1<0)
                cout << "SO";
            else
                cout << "NO";
            cout << endl;
        }
    }
    return 0;
}
