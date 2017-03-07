#include<stdio.h>
int main()
{
    int n,a,b,i,j,test,cases,B,W,A,T;
    char ch[1000];
    scanf("%d",&test);
    for(cases=1;cases<=test;cases++)
    {
        B=0;
        W=0;
        A=0;
        T=0;
        scanf("%d",&n);
        scanf("%s",ch);
        for(i=0;i<n;i++)
        {
            if(ch[i]=='B')
                B++;
            else if(ch[i]=='W')
                    W++;
            else if(ch[i]=='A')
                    A++;
            else if(ch[i]=='T')
                T++;

        }
        if(A==n)
            printf("Case %d: ABANDONED\n",cases);
        else if(B==n||B==n-A)
            printf("Case %d: BANGLAWASH\n",cases);
        else if(W==n||W==n-A)
            printf("Case %d: WHITEWASH\n",cases);

        else if(B>W)
            printf("Case %d: BANGLADESH %d - %d\n",cases,B,W);
        else if(W>B)
            printf("Case %d: WWW %d - %d\n",cases,W,B);
         else if(W==B)
            printf("Case %d: DRAW %d %d\n",cases,B,T);
    }
    return 0;
}
