#include<stdio.h>
int main()
{
    int a,b,c,d,l,func,num,i,j;
    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&l))
    {

        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;

         num=0;
        for(i=0;i<=l;i++)
        {
            func=a*i*i+b*i+c;
            if(func%d==0)
                num++;
        }

        printf("%d\n",num);
    }
    return 0;
}
