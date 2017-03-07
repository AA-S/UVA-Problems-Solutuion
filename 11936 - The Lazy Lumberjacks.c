#include<stdio.h>

int main()
{
    long int a,b,c,i,n;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if((a+b)<=c||(a+c)<=b||(b+c)<=a)
            printf("Wrong!!\n");
        else
            printf("OK\n");
    }
    return 0;
}
