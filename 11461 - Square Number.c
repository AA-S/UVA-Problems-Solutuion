#include<stdio.h>
#include<math.h>
int main()
{
    long int num,a,b,n,i,j,k;
    while(scanf("%ld%ld",&a,&b)!=EOF)
    {
        if(a==0&&b==0)
            break;
        else if(a!=0&&b!=0)
        {
            if(a<=b)
            {
                i=1;
                n=0;
                for(num=a; num<=b; num++)
                {
                    for(; i<=sqrt(num); i++)
                    {
                        if(i*i==num)
                            n++;

                    }
                }
                printf("%ld",n);
                printf("\n");

            }
            else if(a>b)
            {
                i=1;
                n=0;
                for(num=b; num<=a; num++)
                {
                    for(; i<=sqrt(num); i++)
                    {
                        if(i*i==num)
                            n++;
                    }
                }
                printf("%ld",n);
                printf("\n");

            }
        }
    }
    return 0;
}
