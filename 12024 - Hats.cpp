#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,n;
    string str[] ={
    "0/0",
    "0/1",
    "1/2",
    "2/6",
    "9/24",
    "44/120",
    "265/720",
    "1854/5040",
    "14833/40320",
    "133496/362880",
    "1334961/3628800",
    "14684570/39916800",
    "176214841/479001600",
    "0/0"
};
    scanf("%d",&test);
    for(int cases=1; cases<=test; cases++)
    {
        scanf("%d",&n);
        cout << str[n] <<endl;
    }

    return 0;
}
