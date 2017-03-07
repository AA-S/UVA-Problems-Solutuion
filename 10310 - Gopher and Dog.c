#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    double x1,y1,x2,y2;
    while(scanf("%d%lf%lf%lf%lf",&n,&x1,&y1,&x2,&y2)!=EOF)
    {
        int a,b,c=0,i,j;
        a=n;
        double arr[a+5][2+5],t,s1,s2;
        for(i=0;i<a;i++)
        {
            for(j=0;j<2;j++)
                scanf("%lf",&arr[i][j]);
        }
        for(i=0;i<a;i++)
        {
            s1=sqrt( (x1-arr[i][0]) * (x1-arr[i][0])  +  (y1-arr[i][1]) * (y1-arr[i][1]) );
            s2=sqrt( (x2-arr[i][0]) * (x2-arr[i][0])  +  (y2-arr[i][1]) * (y2-arr[i][1]) );

            t=2*s1/s2;

            if(t<=1)
            {
                printf("The gopher can escape through the hole at (%.3lf,%.3lf).\n",arr[i][0],arr[i][1]);
                c=1;
                break;
            }
            else
            {
                c=2;
            }

        }
        if(c==2)
        printf("The gopher cannot escape.\n");


    }
    return 0;
}
