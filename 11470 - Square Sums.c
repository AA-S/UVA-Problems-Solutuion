#include<stdio.h>
int main()
{
    long long int n,cases=1;
    while(scanf("%lld",&n))
    {
        if(n==0)
            break;
        long long int i,j,k,a,b,m=0,sum[100]={0},arr[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                scanf("%lld",&arr[i][j]);
        }
        a=0;
        while(n-a>=1)
        {
             for(i=a;i<n;i++)
             {
                  for(j=a;j<n;j++)
                  {
                      if(i==a||i==n-1)
                        sum[m]=sum[m]+arr[i][j];
                      else if(j==a||j==n-1)
                        sum[m]=sum[m]+arr[i][j];
                  }
             }

             a++;
             n--;
             m++;

        }

        printf("Case %lld: ",cases);
        for(i=0;i<m;i++)
        {
            if(i<m-1)
            printf("%lld ",sum[i]);
            else
                printf("%lld",sum[i]);
        }

        printf("\n");
        cases++;
    }
    return 0;
}
