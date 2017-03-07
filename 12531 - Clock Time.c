#include<stdio.h>
int main()
{
    int a,b,c,n,m,time;
    while(scanf("%d",&time)!=EOF)
    {
        if(time%6==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
