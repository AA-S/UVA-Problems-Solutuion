#include<bits/stdc++.h>

using namespace std;

int main()
{
    int b,s,cases=1;
    while(scanf("%d%d",&b,&s))
    {
        if(b==0&&s==0)
            break;

        if(b==1)
        {
            printf("Case %d: :-\\\n",cases);
        }
        else if(b==s)
        {
            printf("Case %d: :-|\n",cases);
        }
        else if(b>s)
        {
            printf("Case %d: :-(\n",cases);
        }
        else
        {
            printf("Case %d: :-|\n",cases);
        }
        cases++;
    }
    return 0;
}
