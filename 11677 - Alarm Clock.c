#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,a,b,i;
    while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2))
    {
        if(h1==0&&m1==0&&h2==0&&m2==0)
            break;
        if(h2>h1)
        {
            a=h1*60+m1;
            b=h2*60+m2;
            printf("%d\n",b-a);
        }

        else if(h1==h2)
        {
            if(m1<=m2)
                printf("%d\n",m2-m1);
            else if(m2<m1)
            {
                a=(23-h1+h2)*60;
                printf("%d\n",a+60-m1+m2);
            }

        }
        else if(h2<h1)
        {
            if(m2>=m1)
            a=(24-h1+h2)*60;
            else
                 a=(23-h1+h2)*60;
            if(m1>m2)
                b=60-m1+m2;
            else if(m1<=m2)
                b=m2-m1;
            printf("%d\n",a+b);
        }
    }
    return 0;
}
