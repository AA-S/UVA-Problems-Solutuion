#include<stdio.h>
int main()
{
    int test,m;
    scanf("%d",&test);
    for(m=1;m<=test;m++)
    {
        char ch[10],c;
        int a,b,i,j,num,hh,mm;
            hh=0;
            mm=0;
        scanf("%d%c%d",&hh,&c,&mm);
//        for(i=0;ch[i]!='\0';i++)
//        {
//
//            if(i<2)
//                hh=hh*10+ch[i]-'0';
//            if(i>2)
//                mm=mm*10+ch[i]-'0';
//        }

        a=mm;
        b=hh;
        if(mm>0)
        {
            a=60-mm;
            hh++;
        }
        if(hh<12)
            b=12-hh;
        if(hh>12)
            b=hh-12+10;
        if(hh==12)
            b=hh;

        if(b<10&&a<=9)
            printf("0%d:0%d\n",b,a);
        else if(b<=9)
            printf("0%d:%d\n",b,a);
        else if(a<=9)
            printf("%d:0%d\n",b,a);
        else
            printf("%d:%d\n",b,a);

    }

    return 0;

}
