#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int test,n,m;
    scanf("%d",&test);
    for(int cases=1; cases<=test; cases++)
    {
        scanf("%d%d",&n,&m);
        int nNum[n+10],mNum[m+10],mn,mx,nE=0,mE=0,j=0,k=0;
       // multiset<int>nNum;
       // multiset<int>mNum;
        for(int i=0; i<n; i++)
            scanf("%d",&nNum[i]);

        for(int i=0; i<m; i++)
            scanf("%d",&mNum[i]);

        mn = min(m,n);

        sort(nNum,nNum+n);
        sort(mNum,mNum+m);

        //for(int i=0;i<mn;i++)
        while(1)
        {
            if(nNum[j]<mNum[k])
            {
                nE++;
                j++;
            }

            else if(nNum[j]>mNum[k])
            {
                nE++;
                k++;
            }
            else if(nNum[j]==mNum[k])
            {
                j++;
                k++;
            }

            if(j==n)
            {
                printf("%d\n",nE+mE+m-k);
                break;
            }
            else if(k==m)
            {
                printf("%d\n",nE+mE+n-j);
                break;
            }
        }
    }

    return 0;
}

