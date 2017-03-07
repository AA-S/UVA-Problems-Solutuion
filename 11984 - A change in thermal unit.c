#include<stdio.h>
int main()
{
    long int i,c,d,t;
    float sum;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld%ld",&c,&d);
        sum=c+(float)(d)*5.0/9;
        printf("Case %ld: %.2f\n",i,sum);
    }
    return 0;
}
