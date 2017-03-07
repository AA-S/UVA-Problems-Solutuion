#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,test,cases,dig[20],i,j,sum,p,m;
    scanf("%d",&test);
    for(cases=1;cases<=test;cases++)
    {
        scanf("%d",&n);

        i = 0;
        sum = 0;
        p = n;

        while(p)
        {
            dig[i++] = p%10;
            p = p/10;
        }
        for(j=0;j<i;j++)
        {
            m=1;
            for(int k=0;k<i;k++)
                m = m* dig[j];
            sum += m;
        }


        if(sum==n)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");
    }

    return 0;
}
