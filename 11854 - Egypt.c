#include<stdio.h>
int main()
{
    long int a,b,c,i,j,k;
    while(scanf("%ld%ld%ld",&a,&b,&c)==3)
    {
        if(a==0&&b==0&&c==0)
            break;
            i=a*a;
            j=b*b;
            k=c*c;

        if(k==(i+j)||i==(j+k)||j==(k+i))
            printf("right\n");
        else
            printf("wrong\n");
    }

    return 0;
}
