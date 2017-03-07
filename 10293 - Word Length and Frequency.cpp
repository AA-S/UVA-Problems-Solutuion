#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
#include <string>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    char ch[20050][90],str[10011];
    int in,mn,i,j,k,len,strl,mxlen=-1;
    int freq[10000]= {0};
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
        if(strcmp(ch[in],"#")==0)
        {
            in++;
            for(int i=1; i<=mxlen; i++)
            {
                if(freq[i]!=0)
                {
                    printf("%d %d\n",i,freq[i]);
                    freq[i]=0;
                }
            }
           // if(in<mn-1)
                cout << endl;
            mxlen=-1;
            continue;
        }


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



            if((ch[in][i]==' '
                    ||ch[in][i]=='!'
                    ||ch[in][i]=='?'
                    ||ch[in][i]=='.'
                    ||ch[in][i]==','|| ch[in][i+1]=='\0')&&j>0 )
            {
                str[j]='\0';
                strl = strlen(str);
                freq[strl]++;
                if(strl>mxlen)
                    mxlen = strl;
                j=0;
            }
        }

        in++;
    }

    return 0;

}

