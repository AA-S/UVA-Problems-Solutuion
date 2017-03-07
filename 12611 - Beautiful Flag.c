#include<stdio.h>
int main()
{
    int test,m;
    scanf("%d",&test);

    for(m=1;m<=test;m++)
    {
        int radius,len,wid,x1,y1,x2,y2,x3,y3,x4,y4;
        scanf("%d",&radius);

        len=5*radius;
        wid=3*radius;

        x1=-45*len/100;
        y1=wid/2;

        x2=55*len/100;
        y2=wid/2;

        x3=x2;
        y3=-y2;

        x4=x1;
        y4=-y1;

        printf("Case %d:\n",m);

        printf("%d %d\n",x1,y1);
        printf("%d %d\n",x2,y2);
        printf("%d %d\n",x3,y3);
        printf("%d %d\n",x4,y4);
    }
    return 0;
}
