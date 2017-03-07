#include<stdio.h>
int main()
{
    int test,count,i,j,b,len,n;
    scanf("%d",&n);
    for(b=1;b<=n;b++)
    {
        count=0;
        scanf("%d",&len);
        int arr[len],a;
        for(a=0;a<len;a++)
        {
            scanf("%d",&arr[a]);
        }

        for(i=0;i<len;i++)
        {
            for(j=i;j<len-1;j++)
            {
                if(arr[i]>arr[j+1])
                {
                    int d;
                    d=arr[i];
                    arr[i]=arr[j+1];
                    arr[j+1]=d;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}
