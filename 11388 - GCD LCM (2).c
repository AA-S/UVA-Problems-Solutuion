#include<stdio.h>
long long int gcdlcm(long long int , long long  int );
int main()
{
    long long int a,b,c,i,j,gcd,lcm,test,num1,num2,p;
    scanf("%lld",&test);
    for(c=1; c<=test; c++)
    {
        p=0;
        scanf("%lld%lld",&gcd,&lcm);

        //for(i=gcd;i<=lcm;i++)

            for(j=gcd; j==gcd;j++)
            {
                a=gcdlcm(gcd,lcm);
                b=gcd*lcm/a;
                if(a==gcd&&b==lcm)
                {
                    printf("%lld %lld\n",gcd,lcm);
                    p=1;
                       break;
                }
                //j=lcm;
            }

            //if(p==1);
               //break;


        if(p==0)
            printf("-1\n");
    }
    return 0;
}

long long int gcdlcm(long long int number1,long long int number2)
{
    while(number2!=0)
    {
        number1=number1%number2;
        if(number1==0)
        {
            return number2;
        }
        number2=number2%number1;
    }
    return number1;
}
