#include<stdio.h>
#include<math.h>
int main()
{
    int test,m;
    scanf("%d",&test);

    for(m=1;m<=test;m++)
    {
        long long int arr[500],i,j,n=0,a,sum=0;
        while(1)
        {
            scanf("%lld",&arr[n]);
            if(arr[n]==0)
            {
                   break;
            }
            n++;

        }
        for(i=0;i<=n;i++)
        {
            for(j=i;j<=n-1;j++)
            {
                if(arr[i]<arr[j+1])
                {
                    a=arr[i];
                    arr[i]=arr[j+1];
                    arr[j+1]=a;
                }
            }
        }

        for(i=0;i<=n-1;i++)
        {
            a=1;
            for(j=0;j<=i;j++)
                a=a*arr[i];
            sum=sum+a*2;
        }
        if(sum<=5000000)
        printf("%lld\n",sum);
        else
            printf("Too expensive\n");

    }
      return 0;
}
