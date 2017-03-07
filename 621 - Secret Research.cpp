#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string str;
    int test,len;
    scanf("%d",&test);

    for(int cases=1;cases<=test;cases++)
    {
        cin >> str;
        len = str.length();
        if(str=="1" ||str=="4" ||str=="78")
            printf("+\n");
        else if(str.at(len-1)=='5' && str.at(len-2)=='3')
            printf("-\n");
        else if(str.at(0)=='9' && str.at(len-1)=='4')
            printf("*\n");
        else
            printf("?\n");
    }

    return 0;
}
