#include<stdio.h>
int main()
{
    int a,b,n,m,i,j,mini,sum,sets=1,avg;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        m=0;
        sum=0;
         int num[n];

    for(i=0;i<n;i++)
     {
          scanf("%d",&num[i]);
          sum=sum+num[i];
     }

    avg=sum/n;

    for(j=0;j<n;j++)
    {
        if(num[j]>avg)
        {
            a=num[j]-avg;
            m=m+a;
        }
    }

    printf("Set #%d\nThe minimum number of moves is %d.\n\n",sets,m);
    sets++;

    }
    return 0;

}









