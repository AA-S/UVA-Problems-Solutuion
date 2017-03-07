#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,i,s,area,j;
    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
    {
        s=(a+b+c)/2;
         if(s>a&&s>b&&s>c)
        {
            j=s*(s-a)*(s-b)*(s-c);
            area=(4.0/3)*sqrt(j);
            printf("%.3lf\n",area);
        }
       else
            printf("-1.000\n");

    }
    return 0;
}
