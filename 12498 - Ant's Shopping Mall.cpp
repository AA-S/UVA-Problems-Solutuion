#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //cout << min(12,2);
    int test,cases=1,r,c,mov,minMov,mr,ml;
    char ch[60][60];
    scanf("%d",&test);

    for(int cases=1; cases<=test; cases++)
    {
        minMov=214764834;
        scanf("%d%d",&r,&c);
        for(int i=0; i<r; i++)
            scanf("%s",&ch[i]);

        bool check1,check2;

        for(int i=0; i<c; i++)
        {

            mov=0;check2=false;
            for(int j=0; j<r; j++)
            {
                check1=false;
                ml=10000;
                mr=10000;
                if(ch[j][i] != '0')
                {
                    for(int k=i+1; k<c; k++)
                    {
                        if(ch[j][k]=='0')
                        {
                            mr=k-i;
                            check1=true;
                            break;
                        }
                    }

                    for(int k=i-1; k>=0; k--)
                    {
                        if(ch[j][k]=='0')
                        {
                            ml=i-k;
                            check1=true;
                            break;
                        }
                    }
                    if(check1==false)
                    {
                        check2=true;
                        break;
                    }
                    if(mr!=10000 || ml!=10000)
                        mov=mov+min(mr,ml);

                }

            }

            if(mov<minMov)
                minMov=mov;
            if(check2)
            {
                minMov=-1;
                 break;
            }

        }

        printf("Case %d: %d\n",cases,minMov);
    }

    return 0;
}
