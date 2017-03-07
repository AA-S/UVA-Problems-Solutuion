#include<iostream>
#include<queue>
#include<iterator>

using namespace  std;

int main()
{
    int n,p,b;
   while(1)
   {
        cin >> n;
        if(n==0)
            break;
    queue<int>q;
    p=0;

    for(int i=1;i<=n;i++)
    {
        q.push(i);
    }
    if(n==1)
        cout << "Discarded cards:\n";
    else
    cout << "Discarded cards: ";
    while(!q.empty())
    {
        p++;
        int a = q.front();
        q.pop();
        if(p<n-1)
        cout << a << ", ";
        else if(n!=1)
        {
             cout << a << "\n";
        }


            if(!q.empty())
            {
                 b = q.front();
                 q.pop();
            }

        if(!q.empty())
        q.push(b);
        //p++;

    }
    if(n!=1)
    cout << "Remaining card: " << b << endl;
    else
        cout << "Remaining card: " << "1" << endl;
   }

    return 0;
}
