#include<iostream>
#include<set>

using namespace std;

int main()
{
    int n;
    while(cin >> n)
    {
        if(n==0)
            break;
        multiset<int>number;
    int s;
    for(int i=0;i<n;i++)
    {
        cin >> s;
        number.insert(s);
    }

    multiset<int>::iterator a;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
               a=number.begin();
        }
       if(i!=n-1)
        cout << *a<< " ";
       else
        cout << *a;
        a++;
    }
    cout << endl ;
    }
    return 0;
}

