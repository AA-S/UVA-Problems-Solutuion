#include<stdio.h>
int main()
{
    int a,test,j,m,i,n,p,q;
    scanf("%d",&test);
    for(a=1;a<=test;a++)
    {
        scanf("%d%d%d",&n,&p,&q);
        int arr[n+3],sum=0,num=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i;j<n-1;j++)
            {
                if(arr[i]>arr[j+1])
                {
                    m=arr[i];
                    arr[i]=arr[j+1];
                    arr[j+1]=m;
                }
            }
        }

        for(i=0;i<n;i++)
        {
            /*if((sum+arr[i])<q&&num<p)
            {
                 sum=sum+arr[i];
                 num++;
            }

           else
           break;*/

           sum=sum+arr[i];
           if(sum<=q&&num<=p)
           num++;
           if(sum>=q||num>=p)
            break;
        }

        printf("Case %d: %d\n",a,num);
    }

    return 0;
}
