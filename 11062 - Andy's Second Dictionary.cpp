#include<iostream>
#include<cstdio>
#include<algorithm>
#include<set>
#include<cstring>
#include <string>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    char ch[505][4011],str[10011];
    int in,mn,i,j,k,len;
    set<string> dic;
    bool check = true;
    mn=0;
    while(gets(ch[mn])!=NULL)
    {
        mn++;
    }

    in=0;
    j=0;
    while(in<mn)
    {
        len = strlen(ch[in]);

        for(int i=0; i<len; i++)
        {
            if((ch[in][i]>='a' && ch[in][i]<='z') || (ch[in][i]>='A' && ch[in][i]<='Z'))
            {
                check = true;
                if((ch[in][i]>='A' && ch[in][i]<='Z'))
                    ch[in][i] = ch[in][i] + 32;
                str[j++] = ch[in][i];
            }

            else if(ch[in][i]=='-' && ch[in][i+1]!='\0')
            {
                check = true;
                str[j++] = ch[in][i];
            }

            else if(ch[in][i]=='-' && ch[in][i+1]=='\0' && in!=mn-1)
            {
                check = false;
                break;
            }
            else if(ch[in][i]==' ' && check==false && in!=mn-1)
            {
                continue;
            }
            else if(ch[in][i]=='-')
                str[j++] = ch[in][i];



            if(((ch[in][i]>='0' &&ch[in][i]<='9')||ch[in][i]==' ' ||ch[in][i]=='+' ||ch[in][i]=='=' ||ch[in][i]=='(' ||ch[in][i]==')'
                    ||ch[in][i]=='*' ||ch[in][i]=='&' ||ch[in][i]=='^' ||ch[in][i]=='%' ||ch[in][i]=='$'||ch[in][i]=='_'
                    ||ch[in][i]=='#' ||ch[in][i]=='!' ||ch[in][i]=='`' ||ch[in][i]=='~' ||ch[in][i]=='~' ||ch[in][i]==']'
                    ||ch[in][i]=='[' ||ch[in][i]=='{' ||ch[in][i]=='}' ||ch[in][i]=='?' ||ch[in][i]=='@' ||ch[in][i]=='<'
                    ||ch[in][i]=='>' ||ch[in][i]=='/' ||ch[in][i]=='\\' ||ch[in][i]==':' ||ch[in][i]==';' ||ch[in][i]=='.'
                    ||ch[in][i]==','||ch[in][i]=='"'||ch[in][i]=='\''  || ch[in][i+1]=='\0')&&j>0 )
            {
                str[j]='\0';
                string s = str;
                dic.insert(s);
                j=0;
            }
        }

        in++;
    }

    set<string>::iterator pointer;
    for(pointer=dic.begin(); pointer!=dic.end(); pointer++)
    {
        cout << *pointer << endl;
    }

    return 0;

}
