#include<stdio.h>
#define PI 3.1415926535897932384626433832795
int main()
{
    long int n,length,i,j,k;
    double g_area,r_area,t_area,width,radius,pi;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%ld",&length);
        width=(double)6*length/10;
        radius=(double)length/5;

        t_area=length*width;
        r_area=PI*radius*radius;
        g_area=t_area-r_area;

        printf("%.2lf %.2lf\n",r_area,g_area);
    }
    return 0;
}
