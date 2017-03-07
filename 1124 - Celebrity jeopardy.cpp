#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
  //  freopen("out2.txt","w",stdout);
    char str[100000];

    bool check = true;
    while(1)
    {
        if(gets(str)==NULL)
            break;

        printf("%s\n",str);

    }
    return 0;
}
