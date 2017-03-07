#include<stdio.h>
int main()
{
    long long int num;
    while(scanf("%lld",&num))
    {
        if(num==0)
            break;
        long long int parity=0,i=0,j,a,b,arr[100];

        while(num!=0)
        {
            a=num%2;
            if(a==1)
                parity++;
            arr[i++]=a;
            num=num/2;
        }
        printf("The parity of ");
        for(j=i-1;j>=0;j--)
        {
            printf("%lld",arr[j]);
        }
        printf(" is %lld (mod 2).\n",parity);
    }
    return 0;
}








