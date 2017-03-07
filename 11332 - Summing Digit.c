#include<stdio.h>
int main()
{
    unsigned long long int num,i,j,sum;
    while(scanf("%llu",&num)!=EOF)
    {
        while(num>9)
    {
        sum=0;
        while(num!=0)
        {
            i=num%10;
            num=num/10;
            sum=sum+i;
        }
        num=sum;
    }
    if(num>0)
    printf("%llu\n",num);
    }
   return 0;
}
