#include<stdio.h>
#include<math.h>
#define PI 3.1415926535897932384626433832795
int main()
{
    int a,n;
    double r,area,angle,b,h;
    while(scanf("%lf%d",&r,&n)!=EOF)
    {
        angle=(double)360*PI/(2*n*180);

        h=r*cos(angle);
        b=r*sin(angle);

        area=n*h*b;

        printf("%.3lf\n",area);

    }
   return 0;
}
