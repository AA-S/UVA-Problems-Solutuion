#include<stdio.h>
int main()
{
       // freopen("input.txt","r",stdin);
    unsigned int n,i,j,a,b,freq;
    while(1)
    {
        if(scanf("%u %u",&i,&j)!=2)
            break;
        if(i<j)
        {
            b=0;
            for(a=i; a<=j; a++)
            {
                freq=0;
                for(n=a; n>=1;)
                {
                    if(n==1)
                    {
                        freq++;
                        break;
                    }
                    if(n%2==1)
                    {
                        n=3*n+1;
                        freq++;
                    }
                    else
                    {
                        n=n/2;
                        freq++;
                    }
                }
                if(freq>b)
                    b=freq;
            }

            printf("%u %u %u\n",i,j,b);

        }
        else
        {
            b=0;


            for(a=j; a<=i; a++)
            {

                freq=0;

                for(n=a; n>=1;)
                {
                    if(n==1)
                    {
                        freq++;
                        break;
                    }
                    if(n%2==1)
                    {
                        n=3*n+1;
                        freq++;
                    }
                    else
                    {
                        n=n/2;
                        freq++;
                    }
                }
                if(freq>b)
                    b=freq;
            }

            printf("%u %u %u\n",i,j,b);

        }
    }

    return 0;
}
