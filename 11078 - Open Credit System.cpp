#include<bits/stdc++.h>

using namespace std;

int main()
{
     //freopen("in.txt","r",stdin);
     //freopen("out.txt","w",stdout);
    int test,cases,n,mn,mx,m,num,diff;
    scanf("%d",&test);

    for(cases=1; cases<=test; cases++)
    {
        scanf("%d",&n);
        mn  =  299998;
        mx = -299998;
        diff = mx - mn;
        //if(cases==225)
        //cout << n << endl;
        for(int i=0; i<n; i++)
        {
            scanf("%d",&num);
            //if(cases==225)
            //cout << num << endl;
            if(mx-num>diff)
                diff = mx-num;
            if(num>mx && i!=n-1)
            {
                mn  =  299998;
                mx = num;
            }
            else if(num<mn && i!=0)
            {
                mn = num;
            }


        }

        printf("%d\n",diff);
    }

    return 0;
}
