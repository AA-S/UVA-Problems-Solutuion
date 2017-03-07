#include<stdio.h>
int main()
{
    int a,b,c,i,j;
    while(scanf("%d%d",&a,&b))
    {
        j=0;
        c=0;
        if(a==-1&b==-1)
            break;
            if(a<=b)
            {
                 for(i=a;i<b;i++)
            j++;
        for(i=a;i>=0;i--)
            c++;
        for(i=99;i>b;i--)
            c++;
            }
            else
            {
                for(i=b;i<a;i++)
            j++;
        for(i=b;i>=0;i--)
            c++;
        for(i=99;i>a;i--)
            c++;
            }

        if(j>=c)
            printf("%d\n",c);
        else
            printf("%d\n",j);
    }
    return 0;
}
