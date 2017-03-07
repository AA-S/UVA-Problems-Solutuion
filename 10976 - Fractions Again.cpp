#include<bits/stdc++.h>

using namespace std;

int main()
{
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    long long int k,xy[10010][2],div,j,x1,y1,counter;
    while(scanf("%lld",&k)!=EOF)
    {
        j=0;
        counter=0;
        y1=k+1;
        while(1)
        {
            x1 = k*y1/(y1-k);
            if(x1<y1) break;
            long long int ll = (x1*y1);
            double d = ll*1.0/(x1+y1);
            if(d==k)
            {
                xy[j][0] = x1;
                xy[j++][1] = y1;
                counter++;
            }
            y1++;
        }
        cout << counter<<endl;
        for(int i=0;i<j;i++)
        {
            printf("1/%lld = 1/%lld + 1/%lld\n",k,xy[i][0],xy[i][1]);
        }
    }
    return 0;
}
