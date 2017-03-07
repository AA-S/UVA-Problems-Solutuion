#include<stdio.h>
int main()
{

    long long int low,hi,a,b,c,n,m,i,freq,num,p;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        scanf("%lld %lld",&low,&hi);
        num=low;
       if(low>=1000||hi>=1000)
       {
           for(a=low;a<=hi;a++)
        {
            m=1;
            p=a;
            freq=0;
            for(b=1;b<=m;b++)
            {
                if(a%b==0)
                    freq=freq+2;
                    m=a/b;

            }

            if(freq>c)
            {
                c=freq;
                num=p;
            }

           }
          printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",low,hi,num,c);
       }

       else
       {
            for(a=low;a<=hi;a++)
        {
            m=1;
            p=a;
            freq=0;
            for(b=1;b<=a;b++)
            {
                if(a%b==0)
                    freq=freq+1;

            }

            if(freq>c)
            {
                c=freq;
                num=p;
            }

           }
           printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",low,hi,num,c);
       }


        }
        return 0;

}
