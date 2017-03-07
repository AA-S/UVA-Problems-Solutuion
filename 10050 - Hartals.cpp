#include<bits/stdc++.h>

using namespace std;
int  counter;
set<int>s;

int multiple(int n,int h)
{
    for(int day=h; day<=n; day += h)
    {
        if(day%7 !=0 && day%7 != 6 && s.count(day)==0)
            s.insert(day);
    }
}

int main()
{
    int test,cases,p,n,h;
    scanf("%d",&test);

    for(cases=1;cases<=test;cases++)
    {
        scanf("%d",&n);
        scanf("%d",&p);
        for(int i=1;i<=p;i++)
        {
            scanf("%d",&h);
            multiple(n,h);
        }
        //set<int>::iterator it;
        //for(it=s.begin();it!=s.end();it++)
            //cout << *it << " ";
        cout << s.size() << endl;
        s.clear();
    }

    return 0;
}
