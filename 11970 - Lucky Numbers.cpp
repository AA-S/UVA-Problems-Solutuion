#include<bits/stdc++.h>

using namespace std;

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int test;
    scanf("%d",&test);

    for(int cases=1; cases<=test; cases++)
    {
        long long int n,num,i=1,j;
        set<long long int>s;
        scanf("%lld",&n);
        if(n==1)
        {
            printf("Case %d:\n",cases);
            continue;
        }
        while(n-i*i>0)
        {
            if((n-i*i)%i==0)
            {
                s.insert(n-i*i);
            }
            i++;
        }
        long long int counter=1,len=s.size();
        set<long long int>::iterator it;
        printf("Case %d: ",cases);
        for(it=s.begin(); it!=s.end(); it++)
        {

            if(counter!=len)
                printf("%lld ",*it);
            else
                printf("%lld",*it);
           counter++;
        }
        printf("\n");
    }

    return 0;
}
