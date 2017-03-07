#include<stdio.h>

int squaresum(int);

int main()
{

    int num,sum=0,a,b,i,j,test,arr[100000][3],in=0,mx=0,man;
    //scanf("%lld",&test);
    //freopen("in.txt","r",stdin);
    while(scanf("%d%d",&arr[mx][0],&arr[mx][1])!=EOF)
        mx++;
    for(in=0; in<mx; in++)
    {
        for(man = arr[in][0]; man<=arr[in][1]; man++)
        {
            num=man;
            int counter=1;
            while(1)
            {
                if(num==1)
                {
                    printf("%d %d\n",man,counter);
                    break;
                }
                else if(num==b||num==4||num==16||num==37||num==58||num==89||num==145||num==42||num==20)
                {
                    //printf("Case #%d: %d is an Unhappy number.\n",i,b);
                    break;
                }
                counter++;
                num=squaresum(num);
            }
        }
        if(in!=mx-1)
            printf("\n");
    }

    return 0;
}



int squaresum(int num)
{
    int a,sum=0;
    while(num!=0)
    {
        a=num%10;
        num=num/10;
        sum=sum+a*a;
    }
    return sum;
}

