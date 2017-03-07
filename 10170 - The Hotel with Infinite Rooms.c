#include<stdio.h>
int main()
{
    unsigned long long int s,d,a,b,i,j,mem;
    while(scanf("%llu%llu",&s,&d)!=EOF)
{
    for(i=s;i<=d;i++)
    {
        d=d-i;
        if(d==0);
            //s++;
       else if(d>0)
        s++;
    }
    printf("%llu\n",s);
}

   return 0;

}
