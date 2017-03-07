#include<bits/stdc++.h>

using namespace std;

int main()
{
    multiset<long long int>s;
    multiset<long long int>::iterator it;
    long long int val,siz;
    while(scanf("%lld",&val)!=EOF)
    {
        s.insert(val);
        siz = s.size();
        it = s.begin();
        if(siz%2==1)
        {
            for(int  i=1;i<=siz/2;i++)
            it++;
            printf("%lld\n",*it);
        }
        else
        {
             for(int  i=1;i<siz/2;i++)
             it++;
             long long int a=*it,b=*(++it);
             printf("%lld\n",(a+b)/2);
        }

        //printf("%d\n",*it);
    }
    return 0;
}
