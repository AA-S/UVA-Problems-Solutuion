#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> q;
    int n,i,j,k;
    while(1)
    {
        cin >> n;
        if(n==0)
            break;
        int arr[5500],cost=0,total=0;

        for(i=0;i<n;i++)
        {
             cin >> k;
             q.push(-k);
        }
        int m,b;
        while(!q.empty())
        {
            m  = q.top();
           // cout << m << "  ";
            q.pop();
            b = q.top();
           // cout << b << "  ";
            q.pop();

             if(!q.empty())
            q.push(m+b);
           total = total -m-b;

        }
        cout << total  << "\n";
     }
 return 0;

}
