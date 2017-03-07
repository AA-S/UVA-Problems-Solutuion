#include<stdio.h>
int main()
{
    long long int num,a,i,j,arr[1000];
    while(scanf("%lld",&num)!=EOF)
    if(num>=0)
    {
       if(num==0)
        printf("0");
       else
       {
           for(i=0;num!=0;i++)
         {
             arr[i]=num%3;
             num=num/3;
         }
         for(j=i-1;j>=0;j--)
         {
             printf("%lld",arr[j]);
         }
       }

         printf("\n");
    }
    return 0;
}
