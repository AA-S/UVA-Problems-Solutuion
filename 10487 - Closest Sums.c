#include<stdio.h>
int main()
{
    int n,cases=1;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        int arr[n],i,j,k,l,m;
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);
        scanf("%d",&m);
        int aq[m],a,b,sum,c;
        for(i=0;i<m;i++)
            scanf("%d",&aq[i]);
        printf("Case %d:\n",cases);
        for(a=0;a<m;a++)
        {
            k=arr[0]+arr[1];
            if(k>=aq[a])
            l=k-aq[a];
            else
                l=aq[a]-k;
                sum=k;
            for(i=0;i<n;i++)
            {
                for(j=i;j<n-1;j++)
                {
                   b=arr[i]+arr[j+1];
                    if(b>=aq[a])
                        c=b-aq[a];
                    else
                        c=aq[a]-b;
                    if(c<l)
                    {
                         sum=b;
                         l=c;
                    }

                }
            }
            printf("Closest sum to %d is %d.\n",aq[a],sum);
        }
        cases++;
    }
}
