#include<stdio.h>
int main()
{
    long int a[3],b,c,s,i,j,l,t,maxi,mini;
    scanf("%ld",&t);
    for(i=1;i<=t;i++)
    {
        for(j=0;j<3;j++)
        scanf("%ld",&a[j]);
        maxi=a[0];
        mini=a[0];
       for(j=1;j<3;j++)
       {
           if(a[j]>maxi)
            maxi=a[j];
           if(a[j]<mini)
            mini=a[j];
       }
       for(j=0;j<3;j++)
       {
           if(a[j]==maxi||a[j]==mini)
            ;
           else
            s=a[j];
       }
        printf("Case %ld: %ld\n",i,s);
    }
    return 0;
}
