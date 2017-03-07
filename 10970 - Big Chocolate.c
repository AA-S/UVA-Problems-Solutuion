#include<stdio.h>
int main()
{
    int m,n,a,b;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        a=m*n;
        if(a<=0)
            printf("0\n");
        else
        printf("%d\n",m*n-1);
    }
    return 0;
}
