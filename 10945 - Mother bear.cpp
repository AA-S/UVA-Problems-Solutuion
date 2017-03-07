#include<bits/stdc++.h>

using namespace std;

int main()
{
     //freopen("in.txt","r",stdin);
     //freopen("out.txt","w",stdout);
    string ch;
    while(getline(cin,ch))
    {
        if(ch.compare("DONE")==0)
            break;

        int len=ch.length(),j=0;
        char str[len+1];
        for(int i=0;i<len;i++)
        {
            if(ch[i]>='A'&&ch[i]<='Z')
                str[j++] = ch[i] + 32;
            else if(ch[i]>='a'&&ch[i]<='z')
                str[j++] = ch[i];
        }
        str[j]='\0';
        string s = str;
        ch = str;
        reverse(s.begin(),s.end());
        //strrev(str);
        if(s.compare(ch)==0)
            printf("You won't be eaten!\n");
        else
            printf("Uh oh..\n");
        //cout << ch << "   "<< s<< "   "<<str;
        strcpy(str,"");
    }

    return 0;
}

