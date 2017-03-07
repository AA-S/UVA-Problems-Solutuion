#include<stdio.h>
int main()
{
    long int a,b,c,d,lcm,gcd,i,j;
    scanf("%ld",&j);
    for(i=1;i<=j;i++)
    {
        scanf("%ld%ld",&a,&b);

        c=a*b;

        for(d=a;d<=c;d++)
        {
            if(d%a==0&&d%b==0)
            {
               lcm=d;
                break;
            }
        }
        gcd=c/d;
        if(gcd==a&&gcd)
        printf("%ld %ld\n",gcd,lcm);
    }

}
