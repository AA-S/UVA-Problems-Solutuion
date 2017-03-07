#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,r,test,cases;
    scanf("%d",&test);
    for(cases=1;cases<=test;cases++)
    {
        double root,m;
        scanf("%d%d%d",&x,&y,&r);
        root=sqrt(x*x+y*y);
        printf("%.2lf %.2lf\n",r-root,r+root);


}
return 0;
}
