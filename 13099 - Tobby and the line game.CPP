#include<bits/stdc++.h>

using namespace std;

int main()
{
    int x1,y1,x2,y2;
    while(scanf("%d%d%d%d",&x1,&y1,&x2,&y2)!=EOF)
    {
        double eDis = ((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))/6.0;
        printf("%.8lf\n",eDis);
    }

    return 0;
}
