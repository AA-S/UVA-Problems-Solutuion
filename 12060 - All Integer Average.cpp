#include<iostream>
#include<cstdio>

using namespace  std;
int a,b,c;


int relPrime(int x,int y)
{
    int i=2;
    b=x;
    c=y;
    while(i<=x)
    {
        if(x%i==0)
        {
            x = x/i;
            if(b%i==0 && c%i==0)
            {
                b=b/i;
                c=c/i;
            }
        }
        else
            i++;

    }
    return 0;

}

int noOfDigit(int num)
{
    int counter=0;
    while(num)
    {
        num=num/10;
        counter++;
    }
    return counter;
}



int main()
{
    //printf("%d\n",noOfDigit(20320));
    //relPrime(1,4);
    //printf("%d, %d",b,c);
   // freopen("in.txt","r",stdin);
   // freopen("out2.txt","w",stdout);
    int n,num,sum,cases=1,da,db,dc;
    while(scanf("%d",&n))
    {
        if(n==0) break;
        sum=0;
        for(int i=1; i<=n; i++)
        {
            scanf("%d",&num);
            sum += num;
        }
        printf("Case %d:\n",cases++);
        if(sum>=0)
        {
            if(sum%n==0)
                printf("%d\n",sum/n);
            else if(sum/n>=1)
            {
                a = sum/n;
                relPrime(sum - (sum/n)*n,n);
                da = noOfDigit(a);
                db = noOfDigit(b);
                dc = noOfDigit(c);
                for(int i=1; i<=da+dc-db; i++)
                    printf(" ");
                printf("%d\n%d",b,a);
                for(int i=1; i<=dc; i++)
                    printf("-");
                printf("\n");
                for(int i=1; i<=da; i++)
                    printf(" ");
                printf("%d\n",c);
            }
            else
            {
                relPrime(sum - (sum/n)*n,n);
                db = noOfDigit(b);
                dc = noOfDigit(c);
                for(int i=1; i<=dc-db; i++)
                    printf(" ");
                printf("%d\n",b);
                for(int i=1; i<=dc; i++)
                    printf("-");
                printf("\n");
                printf("%d\n",c);
            }
        }

        else if(sum<0)
        {
            sum = -sum;
            if(sum%n==0)
                printf("- %d\n",sum/n);
            else if(sum/n>=1)
            {
                a = sum/n;
                relPrime(sum - (sum/n)*n,n);
                da = noOfDigit(a);
                db = noOfDigit(b);
                dc = noOfDigit(c);
                for(int i=1; i<=2+da+dc-db; i++)
                    printf(" ");
                printf("%d\n- %d",b,a);
                for(int i=1; i<=dc; i++)
                    printf("-");
                printf("\n");
                for(int i=1; i<=2+da; i++)
                    printf(" ");
                printf("%d\n",c);
            }

            else
            {
                relPrime(sum - (sum/n)*n,n);
                db = noOfDigit(b);
                dc = noOfDigit(c);
                for(int i=1; i<=2+dc-db; i++)
                    printf(" ");
                printf("%d\n- ",b);
                for(int i=1; i<=dc; i++)
                    printf("-");
                printf("\n");
                printf("  %d\n",c);
            }


        }

    }

    return 0;
}
