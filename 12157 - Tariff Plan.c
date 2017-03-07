#include<stdio.h>
int main()
{
    char mile[]="Mile",juice[]="Juice";
    int a,b,c,i,j,test,cases=1,n;
    scanf("%d",&test);
    for(cases=1;cases<=test;cases++)
    {
        scanf("%d",&n);
        int arr[n],sum1=0,sum2=0;
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);

        for(i=0;i<n;i++)
        {
            a=arr[i]/30;
            sum1=sum1+(a+1)*10;

            b=arr[i]/60;
            sum2=sum2+(b+1)*15;
        }
        if(sum1<sum2)
             printf("Case %d: %s %d\n",cases,mile,sum1);
        else if(sum2<sum1)
             printf("Case %d: %s %d\n",cases,juice,sum2);
        else
             printf("Case %d: %s %s %d\n",cases,mile,juice,sum1);
    }
    return 0;
 }
