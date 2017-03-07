#include<iostream>
#include<set>
#include<cstdio>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n) && n!=0)
    {
        set<int>s;
        int fact=2,num=n;

        while(1)
        {
            bool check=true;
            if(num%fact==0)
            {
                s.insert(fact);
                num=num/fact;
              //  cout << fact <<" ";
                check= false;
            }
            if(check)
                fact++;
            if(num<fact)
                break;
        }
        printf("%d : %d\n",n,s.size());
    }
    return 0;
}

