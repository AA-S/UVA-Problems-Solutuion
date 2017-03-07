#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,n;
    int num[] =
    {
        0,
        1,
        3,
        13,
        75,
        541,
        4683,
        47293,
        545835,
        7087261,
        102247563,
        1622632573

    };
    scanf("%d",&test);
    for(int cases=1; cases<=test; cases++)
    {
        scanf("%d",&n);
        cout << num[n] <<endl;
    }

    return 0;
}
