#include<stdio.h>
int main()
{
    long long int num,a,b,c,cs=1,d,e,f,g,h,i,j,k,l,m;
    while(scanf("%lld",&num)!=EOF)
    {
        printf("%4lld.",cs);
        if(num<100)
            printf(" %lld\n",num);
        else if(num<1000)
        {
            a=num/100;
            printf(" %lld shata",a);
            b=num%100;
            if(b>0)
            printf(" %lld",b);
            printf("\n");
        }
        else if(num<10000)
        {
            a=num/1000;
            printf(" %lld hajar",a);
            num=num%1000;
            b=num/100;
            if(b>0)
                printf(" %lld shata",b);
            num=num%100;
            if(num>0)
                printf(" %lld",num);
            printf("\n");
        }
        else if(num<100000)
        {
            a=num/1000;
            printf(" %lld hajar",a);
            num=num%1000;
            b=num/100;
            if(b>0)
                printf(" %lld shata",b);
            num=num%100;
            if(num>0)
                printf(" %lld",num);
            printf("\n");
        }
        else if(num<1000000)
        {
            a=num/100000;
            printf(" %lld lakh",a);
            num=num%100000;
            b=num/1000;
            if(b>0)
                printf(" %lld hajar",b);
            num=num%1000;
            c=num/100;
            if(c>0)
                printf(" %lld shata",c);
            num=num%100;
            if(num>0)
                printf(" %lld",num);
            printf("\n");
        }
        else if(num<10000000)
        {
            a=num/100000;
            printf(" %lld lakh",a);
            num=num%100000;
            b=num/1000;
            if(b>0)
                printf(" %lld hajar",b);
            num=num%1000;
            c=num/100;
            if(c>0)
                printf(" %lld shata",c);
            num=num%100;
            if(num>0)
                printf(" %lld",num);
            printf("\n");
        }
        else if(num<100000000)
        {
            a=num/10000000;
            printf(" %lld kuti",a);
            num=num%10000000;
            b=num/100000;
            if(b>0)
                printf(" %lld lakh",b);
            num=num%100000;
            c=num/1000;
            if(c>0)
                printf(" %lld hajar",c);
            num=num%1000;
            d=num/100;
            if(d>0)
                printf(" %lld shata",d);
            num=num%100;
            if(num>0)
                printf(" %lld",num);
            printf("\n");
        }
        else if(num<1000000000)
        {
            a=num/10000000;
            printf(" %lld kuti",a);
            num=num%10000000;
            b=num/100000;
            if(b>0)
                printf(" %lld lakh",b);
            num=num%100000;
            c=num/1000;
            if(c>0)
                printf(" %lld hajar",c);
            num=num%1000;
            d=num/100;
            if(d>0)
                printf(" %lld shata",d);
            num=num%100;
            if(num>0)
                printf(" %lld",num);
            printf("\n");
        }
        else if(num>=1000000000)
        {
            a=num/10000000;
            if(a<1000)
            {
                i=a/100;
                printf(" %lld shata",i);
                a=a%100;
                if(a>0)
                    printf(" %lld",a);
            }
            else if(a<10000)
            {
                i=a/1000;
                printf(" %lld hajar",i);
                a=a%1000;
                j=a/100;
                if(j>0)
                    printf(" %lld shata",j);
                a=a%100;
                if(a>0)
                    printf(" %lld",a);
            }
            else if(a<100000)
            {
                i=a/1000;
                printf(" %lld hajar",i);
                a=a%1000;
                j=a/100;
                if(j>0)
                    printf(" %lld shata",j);
                a=a%100;
                if(a>0)
                    printf(" %lld",a);
            }
            else if(a<1000000)
            {
                i=a/100000;
                printf(" %lld lakh",i);
                a=a%100000;
                j=a/1000;
                if(j>0)
                    printf(" %lld hajar",j);
                a=a%1000;
                k=a/100;
                if(k>0)
                    printf(" %lld shata",k);
                a=a%100;
                if(a>0)
                    printf(" %lld",a);
            }
            else if(a<10000000)
            {
                i=a/100000;
                printf(" %lld lakh",i);
                a=a%100000;
                j=a/1000;
                if(j>0)
                printf(" %lld hajar",j);
                a=a%1000;
                k=a/100;
                if(k>0)
                    printf(" %lld shata",k);
                a=a%100;
                if(a>0)
                    printf(" %lld",a);
            }
            else if(a<100000000)
            {
                i=a/10000000;
                printf(" %lld kuti",i);
                a=a%10000000;
                j=a/100000;
                if(j>0)
                    printf(" %lld lakh",j);
                a=a%100000;
                k=a/1000;
                if(k>0)
                    printf(" %lld hajar",k);
                a=a%1000;
                l=a/100;
                if(l>0)
                    printf(" %lld shata",l);
                a=a%100;
                if(a>0)
                    printf(" %lld",a);
            }
            printf(" kuti");
            num=num%10000000;
            b=num/100000;
            if(b>0)
                printf(" %lld lakh",b);
            num=num%100000;
            c=num/1000;
            if(c>0)
                printf(" %lld hajar",c);
            num=num%1000;
            d=num/100;
            if(d>0)
                printf(" %lld shata",d);
            num=num%100;
            if(num>0)
                printf(" %lld",num);
                printf("\n");
        }
        cs++;
    }
    return 0;
}
