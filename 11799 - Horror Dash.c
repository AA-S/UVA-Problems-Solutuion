#include<stdio.h>
int main()
{
    long int i,j,p,n,t;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%ld",&n);
        long int a[n],maxi;
        for(j=0;j<n;j++)
        {
            scanf("%ld",&a[j]);

        }
        maxi=a[0];
        for(p=0;p<n;p++)
        {
            if(a[p]>maxi)
                maxi=a[p];
        }
        printf("Case %ld: %ld\n",i,maxi);
    }
    return 0;
}
