#include<stdio.h>
int main()
{
     unsigned long int n,num,test,sum,i,a,b=0,rev=0;
    scanf("%lu",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lu",&num);
        test=0;
        b=0;
        if(num!=196)
        {
       while(num!=b)
        {
            sum=num;
            rev=0;
            while(num!=0)
        {
            a=num%10;
            num=num/10;
            rev=rev*10+a;
        }

        b=rev;
        if(sum==rev)
            num=rev;
        else
        {
           num =sum+rev;
            test++;
        }
    }
    if(test<1000)
    printf("%lu %lu\n",test,num);

    }
    }
   return 0;
}
