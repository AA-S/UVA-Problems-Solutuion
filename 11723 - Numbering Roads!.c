#include<stdio.h>
int main()
{
    int a,b,n,r,i,j,cases=1;
    while(scanf("%d%d",&r,&n))
    {
        if(r==0&&n==0)
            break;
        if(r>=n)
        {
            a=r-n;
            b=a/n;
            if(a%n!=0)
                b++;
            i=n+n*26;
            if(r>i)
                printf("Case %d: impossible\n",cases);
            else if(1)
            {
                printf("Case %d: %d\n",cases,b);
            }


        }
        else
            printf("Case %d: 0\n",cases);
        cases++;
    }
    return 0;
}
