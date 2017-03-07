#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int arr[n+10],a,b,c,i,j,p=0;
        for(i=0;i<n;i++)
            scanf("%d",&arr[i]);

        for(i=0;i<n;i++)
        {
            for(j=0i;j<n-1;j++)
            {
                if(arr[i]>arr[j+1])
                {
                    a=arr[i];
                    arr[i]=arr[j+1];
                    arr[j+1]=a;
                    p++;
                }
            }
        }
        printf("Minimum exchange operations : %d\n",p);
    }
    return 0;
}
