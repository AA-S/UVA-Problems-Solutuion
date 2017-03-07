#include<stdio.h>
#include<math.h>
int main()
{
    long long int num,n,a[5000],m,p,i,number=0,man,mn;
    while(scanf("%lld",&num))
    {
        if(num==1)
            printf("1 = 0\n");
        else if(num==-1)
            printf("-1 = 0\n");

        else if(num==0)
            break;
        else
        {
            if(num<0)
        man=-1*num;
        else
            man=num;
        n=0;

        while(man%2==0)
        {
            a[n++]=2;
            man=man/2;
        }
        mn=sqrt(man);
         for(i=3;i<=mn;)
    {
        if(man%i==0)
        {
            man=man/i;
            a[n]=i;
            n++;
        }
        else if(man%i!=0)
        {
            i=i+2;
        }

     }
     if(man>2)
     {
         a[n++]=man;
     }
     if(num<0)
        printf("%lld = -1 x ",num);
    else
        printf("%lld = ",num);
        for(i=0;i<n;i++)
    {
        if(i==n-1)
        printf("%lld",a[i]);
        else
            printf("%lld x ",a[i]);
    }

        printf("\n");
    }
        }

    return 0;
}
