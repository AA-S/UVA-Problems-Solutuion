#include<iostream>
#include<cstdio>
#include<stack>
#include<cstring>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    // freopen("data2.txt","w",stdout);
    char str[200];
    int test;

   // if(s.empty()) cout << "asd\n";
    scanf("%d",&test);
    getchar();
    for(int cases=1; cases<=test; cases++)
    {
         stack<char> s;
        //scanf("%s",&str);
        gets(str);
        if(strlen(str)==0)
        {
             printf("Yes\n");
             continue;
        }

        bool check=true;
        int len = strlen(str);
        for(int i=0; i<=len; i++)
        {
            if(str[i]=='(' ||str[i]=='[')
                s.push(str[i]);
            else if(str[i]==')')
            {
                if(s.empty())
                {
                    printf("No\n");
                    check=false;
                    break;
                }
                if(s.top()=='(')
                {
                    //cout << s.top();
                    s.pop();
                }

                else
                {
                    printf("No\n");
                    check=false;
                    break;
                }
            }
            else if(str[i]==']')
            {
                if(s.empty())
                {
                    printf("No\n");
                    check=false;
                    break;
                }
                if(s.top()=='[' )
                {
                   // cout << s.top();
                    s.pop();
                }


                else
                {
                    printf("No\n");
                    check=false;
                    break;
                }
            }
            else if(str[i]=='\0' && !s.empty())
                printf("No\n");
            else if(str[i]=='\0' && s.empty())
                printf("Yes\n");
        }
        int si = s.size();
        for(int i=0;i<si;i++)
            s.pop();
    }

    return 0;
}
