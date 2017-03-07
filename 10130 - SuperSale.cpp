#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int w[1035],v[1035],W,w1,g,n,test,cases,result,k;
    scanf("%d",&test);

    for(cases=1; cases<=test; cases++)
    {
        result = 0;
        scanf("%d",&n);

        for(int i=0; i<n; i++)
            scanf("%d%d",&v[i],&w[i]);
        scanf("%d",&g);

        for(int c=0; c<g; c++)
        {
            scanf("%d",&W);
            //for(int i=0; i<=W; i++)
             int   B[50]  =  {0};
            for (k=0; k<n; k++)
            {
                for (w1 = W; w1>= w[k]; w1--)
                {
                    if (B[w1 - w[k]] + v[k] > B[w1])
                        B[w1] = B[w1 - w[k]] + v[k];
                }
            }
            result += B[W];
        }
        cout << result << endl;
    }

    return 0;
}






