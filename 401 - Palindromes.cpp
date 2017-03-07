#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int reverseString(char ch[])
{
    int j=0;
    char str[50];
    strcpy(str,ch);
    for(int i=strlen(str)-1; i>=0;i--)
        ch[j++] = str[i];
    ch[j]='\0';
    return 0;
}

int main()
{
    //vector<string> str;
    char str[100];
    char ch[100];
    int mx=0,in=0;
    freopen("out.txt","w",stdout);
    freopen("in.txt","r",stdin);

    char str2[30]="AEHIJLMOSTUVWXYZ12358";
    char  ch2[30]="A3HILJMO2TUVWXY51SEZ8";
    map<char,char>m;
    for(int i=0; i<strlen(str2); i++)
        m.insert(pair<char,char>(str2[i],ch2[i]));
    while(scanf("%s",str)!=EOF)
    {
        //if(mx++)
          //  printf("\n");
        strcpy(ch,str);

        reverseString(ch);

        int len=0;
        for(len=0; len<strlen(str); len++)
        {
            if(m[ch[len]]==str[len])
           ;
            else
                break;
        }
        if(len==strlen(str))
        {
            if(strcmp(str,ch));
            else
            {
                printf("%s -- is a mirrored palindrome.\n\n",str);
                continue;
            }
            printf("%s -- is a mirrored string.\n\n",str);
            continue;
        }

        if(strcmp(str,ch));
        else
        {
            printf("%s -- is a regular palindrome.\n\n",str);
            continue;
        }
        printf("%s -- is not a palindrome.\n\n",str);
    }
    return 0;
}


