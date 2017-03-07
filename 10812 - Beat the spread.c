#include<stdio.h>
int main()
{
    long int a,b,sum,diff,c,n,p;
    scanf("%ld",&n);
    for(c=1;c<=n;c++)
    {
        p=0;
        scanf("%ld%ld",&sum,&diff);
        if(sum>=diff)
        {
             a=(sum+diff)/2;
        b=(sum-diff)/2;
        if(a+b==sum&&a-b==diff)
            printf("%ld %ld\n",a,b);
        else
            printf("impossible\n");
        }
        else
            printf("impossible\n");

    }
    return 0;
}
