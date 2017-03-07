#include<stdio.h>
int main()
{
    int a,i,n,test,num;
    scanf("%d",&test);

    for(i=1;i<=test;i++)
    {
        scanf("%d",&n);

        num=(n*567/9+7492)*235/47-498;
        if(num<0)
        num=-1*num;
        num=num/10;
        a=num%10;

        printf("%d\n",a);
    }
    return 0;
}
