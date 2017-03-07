#include<stdio.h>
int main()
{
    long long int num,number=2,man,i,j,p,n,nm=1;
    while(scanf("%lld",&n)&&n!=0)
    {
        if(n==1)
            printf("The 1st humble number is 1.\n");

        for(num=nm;number<=n;num++)
    {
        p=5;
        man=num;
        while(man>1)
        {
            if(man%2==0)
            {
                man=man/2;
                p=1;
            }
            else if(man%3==0)
            {
                man=man/3;
                p=1;
            }
            else if(man%5==0)
            {
                man=man/5;
                p=1;
            }
            else if(man%7==0)
            {
                man=man/7;
                p=1;
            }
            else
            {
                p=0;
                break;
            }

        }
        if(p==1)
            {
                if(number==n)
                {
                    if(n==2)
                        printf("The 2nd humble number is 2.\n");
                    else if(n==3)
                        printf("The 3rd humble number is 3.\n");
                    else if(n%100<21)
                    {
                            printf("The %lldth humble number is %lld.\n",n,num);
                    }
                    else if(n%100>=21)
                    {
                        if(n%10==1)
                            printf("The %lldst humble number is %lld.\n",n,num);
                        else if(n%10==2)
                            printf("The %lldnd humble number is %lld.\n",n,num);
                        else if(n%10==3)
                            printf("The %lldrd humble number is %lld.\n",n,num);
                        else
                            printf("The %lldth humble number is %lld.\n",n,num);
                    }

                }


                number++;
            }
    }
    nm=num;
    }
    return 0;

}
