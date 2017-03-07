#include<iostream>
#include<set>
#include<iterator>
using  namespace  std;

int main()
{
    int n,m;

    while(1)
    {
        cin >> n >> m;
        if(n==0&&m==0)
            break;
        int a,i,j,k,count=0;
        set<int>s;
        for(i=0;i<n;i++)
        {
            cin >> a;
            s.insert(a);
        }


        for(i=0;i<m;i++)
        {
            cin >> a;
            s.insert(a);
        }
        set<int>::iterator t;
        t =  s.begin();
       int as = s.size();
//        while(t!=s.end())
//        {
//            count++;
//            t++;
//        }

    //cout<< <<endl;

        cout << m+n-as<< "\n";
    }

    return  0;
}
