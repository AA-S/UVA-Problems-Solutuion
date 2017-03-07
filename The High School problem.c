#include<stdio.h>
int main()
{
    long int v,t,s;

    while(scanf("%ld %ld",&v,&t)!=EOF)
    {
        if((v>=-100&&v<=100)&&(t>=0&&t<=200))
    {
        s=2*v*t;
        printf("%ld\n",s);

    }

    }
    return 0;

}
