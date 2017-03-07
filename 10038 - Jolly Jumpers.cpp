#include<iostream>
#include<cstdio>
#include<set>
#include<cmath>

using namespace std;

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int arr[n+5];
        int num,check;
        set<int>s;
        scanf("%d",&num);
        for(int i=1; i<n; i++)
        {
                scanf("%d",&check);
                if(abs(check-num)<=n-1)
                s.insert(abs(check-num));
                num =  check;
        }

        if(s.size()==n-1)
            printf("Jolly\n");
        else
            printf("Not jolly\n");

    }

    return 0;
}
