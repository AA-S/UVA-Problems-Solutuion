#include<stdio.h>
int main()
{
    int magn,freq,a,b,c,i,j,d,test,m;
    scanf("%d",&test);

    for(m=1;m<=test;m++)
    {
        if(m!=1)
            printf("\n");
        scanf("%d%d",&magn,&freq);
    for(a=1;a<=freq;a++)
    {
        for(b=1;b<=magn;b++)
        {
            for(c=1;c<=b;c++)
            {
                printf("%d",b);
            }
            printf("\n");
        }


        for(i=magn-1;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",i);
            }

            printf("\n");
        }
       if(a!=freq)
         printf("\n");
    }
    }

    return 0;
}
