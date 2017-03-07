#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    string engW,forW;
    char ch[1000];
    map<string,string> dic;
    while(getline(cin,forW))
    {
        if(forW.compare("")==0)
            break;
        int upto = forW.find_first_of(' '),len = forW.length();

        forW.copy(ch,upto,0);
        ch[upto]='\0';
        engW = ch;

        forW.copy(ch,len-upto-1,upto+1);
        ch[len-upto-1]='\0';
        forW = ch;

        dic.insert(pair<string,string>(forW,engW));

    }
    while(scanf("%s",ch)!=EOF)
    {
        forW = ch;
        if(dic.count(forW)==0)
            cout << "eh" << endl;
        else
            cout << dic[forW] << endl;
    }

    return 0;
}
