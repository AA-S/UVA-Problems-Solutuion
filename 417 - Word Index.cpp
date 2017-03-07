#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2="abcdefghijklmnopqrstuvwxyz";
    map<string,int>m;
    int index=1;
    char ch[10];

    for(int i=0; i<26; i++)
    {
        ch[0] = s2[i];
        ch[1] = '\0';
        s1=ch;
        m.insert(pair<string,int>(s1,index++));
    }
    for(int j=0; j<25; j++)
    {
        for(int i=j+1; i<26; i++)
        {
            ch[0] = s2[j];
            ch[1] = s2[i];
            ch[2] = '\0';
            s1=ch;
            m.insert(pair<string,int>(s1,index++));
        }
    }

    for(int k=0; k<24; k++)
    {
        for(int j=k+1; j<25; j++)
        {
            for(int i=j+1; i<26; i++)
            {
                ch[0] = s2[k];
                ch[1] = s2[j];
                ch[2] = s2[i];
                ch[3] = '\0';
                s1=ch;
                m.insert(pair<string,int>(s1,index++));
            }
        }
    }

    for(int p=0; p<23; p++)
    {
        for(int k=p+1; k<24; k++)
        {
            for(int j=k+1; j<25; j++)
            {
                for(int i=j+1; i<26; i++)
                {
                    ch[0] = s2[p];
                    ch[1] = s2[k];
                    ch[2] = s2[j];
                    ch[3] = s2[i];
                    ch[4] = '\0';
                    s1=ch;
                    m.insert(pair<string,int>(s1,index++));
                }
            }
        }
    }

    for(int n=0; n<22; n++)
    {
        for(int p=n+1; p<23; p++)
        {
            for(int k=p+1; k<24; k++)
            {
                for(int j=k+1; j<25; j++)
                {
                    for(int i=j+1; i<26; i++)
                    {
                        ch[0] = s2[n];
                        ch[1] = s2[p];
                        ch[2] = s2[k];
                        ch[3] = s2[j];
                        ch[4] = s2[i];
                        ch[5] = '\0';
                        s1=ch;
                        m.insert(pair<string,int>(s1,index++));
                    }
                }
            }
        }

    }
    while(scanf("%s",ch)!=EOF)
    {
        cout << m[ch] << endl;
    }
    //cout << index;
    return 0;
}
