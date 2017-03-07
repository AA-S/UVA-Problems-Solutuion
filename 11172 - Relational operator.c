#include<stdio.h>
int main()
{
    long int a,b,t,i;
    scanf("%ld",&t);
    if(t<15)
    {
        for(i=1;i<=t;i++)
        {
            scanf("%ld%ld",&a,&b);
            if((a>-1000000001&&a<1000000001)&&(b>-1000000001&&b<1000000001))
            {
                if(a>b)
                    printf(">\n");
                else if(a<b)
                    printf("<\n");
                else
                    printf("=\n");
            }
        }

    }
    return 0;
}
