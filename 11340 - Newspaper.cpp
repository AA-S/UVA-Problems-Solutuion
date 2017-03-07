#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,k,m,value;
    char key,str[11000];

    scanf("%d",&test);

    for(int cases=1;cases<=test;cases++)
    {
        scanf("%d",&k);
        map<char,int>paid;
        double payment=0;
        for(int i=0;i<k;i++)
        {
            cin>> key >> value;
            paid.insert(pair<char,int>(key,value));

        }

        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            if(i==0)
            getchar();
            gets(str);//scanf("%c",key);

            for(int j=0;j<strlen(str);j++)
            {
                //if(paid[str[i]]!=empty)
                {
                     payment = payment + paid[str[j]];
                   //  cout << str[j];

                }

            } //cout << endl;
        }

        printf("%.2lf$\n",payment/100.0);
    }

    return 0;
}
