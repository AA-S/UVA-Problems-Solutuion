#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,c,d,num=0,i,j,p,n,mark,mark2;
    while(scanf("%lld",&n)!=EOF)

    {
        p=0;
        if(n==0)
            break;

        for(a=3; a<=n; a=a+2)
        {
            mark=0;
            i=2;
            while(i<=sqrt(a))
            {
                if(a%i==0)
                {
                    mark=1;
                    break;

                }
                i++;
            }
             if(mark==0)
                i=a;

            if(a==i)
            {
                b=n-a;

                {
                    j=2;
                    mark2=0;
                    while(j<=sqrt(b))
                    {
                        if(b%j==0)
                        {
                            mark2=1;
                            break;
                        }

                        j++;
                    }
                    if(mark2==0)
                        j=b;

                    if(b==j)
                    {
                        if(n==a+b)
                        {
                            printf("%lld = %lld + %lld\n",n,a,b);
                            p=1;
                        }
                    }
                    if(p==1)
                        break;

                }

            }
            if(p==1)
                break;
        }
        if(p==0)
            printf("Goldbach's conjecture is wrong.\n");

    }
    return 0;

}
