#include<stdio.h>
int main()
{
    long long int n,a,fact;
    while(scanf("%lld",&n)!=EOF)
    {
        fact=1;
        if(n<0)
        {
            if(n%2==0)
                printf("Underflow!\n");
            else
                printf("Overflow!\n");
        }
        else if(n>13)
            printf("Overflow!\n");
        else
        {
            for(a=1;a<=n;a++)
            {
                 fact=fact*a;
            }
           if(fact<10000)
               printf("Underflow!\n");
           else
               printf("%lld\n",fact);
        }

    }
    return 0;
}
