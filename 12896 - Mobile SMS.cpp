#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,cases,L,N[106],P[106];
    //map<string,char> m;
    string str;
    char ch[][6]={
                    " ",".,?\"","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"
    },c[4];
   // for(int i=0;i<10;i++)
      //  for(int j=0;j<strlen(ch[i]);j++)
  //  {
       // c[0] = i+48;c[1] = j+49;c[2] = '\0';
        //str = c;
        //cout << str << " "<< ch[i][j]<<endl;
        //m.insert(pair<string,char>(str,ch[i][j]));
  //  }

    scanf("%d",&test);
    for(cases=1;cases<=test;cases++)
    {
        scanf("%d",&L);

        for(int i=0;i<L;i++)
        {
            scanf("%d",&N[i]);
        }
        for(int i=0;i<L;i++)
        {
            scanf("%d",&P[i]);
        }
        for(int i=0;i<L;i++)
        {
            cout << ch[N[i]][P[i]-1];
        }
        cout << endl;
    }

    return 0;
}
