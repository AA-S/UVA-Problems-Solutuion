#include<stdio.h>
int main()
{
    long int a,b,c,i,j;
    unsigned int n;
    scanf("%u",&n);
    if(n<20)
    for(i=1;i<=n;i++)
    {
        scanf("%ld%ld%ld",&a,&b,&c);

        if((a+b)<=c||(c+b)<=a||(c+a)<=b)
            printf("Case %d: Invalid",i);
        else if(a==b&&b==c&&c==a)
            printf("Case %d: Equilateral",i);
        else if(a==b||b==c||c==a)
            printf("Case %d: Isosceles",i);
        else
            printf("Case %d: Scalene",i);
            printf("\n");
    }
    return 0;
}
