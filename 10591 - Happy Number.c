#include<stdio.h>
long long int squaresum(long long int);
int main()
{
    long long int num,sum=0,a,b,i,j,test;
    scanf("%lld",&test);

    for(i=1;i<=test;i++)
    {
        scanf("%lld",&num);
  b=num;
        while(1)
        {
              num=squaresum(num);
              if(num==1||num==7||num==49||num==97||num==130||num==10)
              {
                  printf("Case #%lld: %lld is a Happy number.\n",i,b);
                  break;
              }
              else if(num==b||num==4||num==16||num==37||num==58||num==89||num==145||num==42||num==20)
              {
                   printf("Case #%lld: %lld is an Unhappy number.\n",i,b);
                   break;
              }
        }

    }

    return 0;
}



long long int squaresum(long long int num)
{
    long long int a,sum=0;
    while(num!=0)
    {
        a=num%10;
        num=num/10;
        sum=sum+a*a;
    }
    return sum;
}
