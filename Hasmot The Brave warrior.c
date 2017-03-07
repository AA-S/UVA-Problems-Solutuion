#include<stdio.h>
int main()
{
     FILE *f;
    f=fopen("ipput.txt","r");
     long int a,b;
     long int ans;

    while(scanf("%ld %ld",&a,&b)!=EOF)
    {
        if(a>b)
            ans=a-b;
        else
            ans=b-a;
        printf("%ld\n",ans);
    }
    return 0;
}
