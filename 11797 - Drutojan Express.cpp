#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int test,cases,m,n,siz;
    string sName,name;
    bool check;

    map<string,int> ma;
    ma["Ja"] = 0;
    ma["Sam"] = 1;
    ma["Sha"] = 2;
    ma["Sid"] = 3;
    ma["Tan"] = 4;

    map<string,int> counter;

    scanf("%d",&test);
    for(cases=1; cases<=test; cases++)
    {
        queue<string> q[5];
        scanf("%d%d",&m,&n);
        cin >> sName;

        check = true;
        counter["Ja"] = 0;
        counter["Sam"] = 0;
        counter["Sha"] = 0;
        counter["Sid"] = 0;
        counter["Tan"] = 0;

        for(int i=0; i<5; i++)
        {
            scanf("%d",&siz);
            for(int j=0; j<siz; j++)
            {
                cin >> name;
                q[i].push(name);
            }
        }

        if(m<=n)
        {
            counter[sName] += m;
            n = n - m - 2;
        }
        else
        {
            counter[sName] += n;
            check = false;
        }
        while(check)
        {
            name = q[ma[sName]].front();
            q[ma[sName]].pop();
            q[ma[sName]].push(name);
            sName = name;

            if(m<=n)
            {
                counter[sName] += m;
                n = n - m - 2;
            }
            else if(n<m)
            {
                if(n>0)
                    counter[sName] += n;
                check = false;
            }

        }

        printf("Case %d:\n",cases);
        cout << "Ja "<< counter["Ja"] << endl;
        cout << "Sam "<< counter["Sam"] << endl;
        cout << "Sha "<< counter["Sha"] << endl;
        cout << "Sid "<< counter["Sid"] << endl;
        cout << "Tan "<< counter["Tan"] << endl;
    }
    return 0;
}
