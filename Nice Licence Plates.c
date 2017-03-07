#include<stdio.h>
int main()
{
    int test,m;
    scanf("%d",&test);
    for(m=1;m<=test;m++)
    {
        char ch[1000];
        int i,j,a,b,num1=0,num2=0,diff;
        scanf("%s",ch);

        for(i=0;i<3;i++)
        {
            if(i==0)
                a=(ch[i]-65)*26*26;
            else if(i==1)
                a=(ch[i]-65)*26;
           else
               a=(ch[i]-65)*1;
            num1=num1+a;
        }

        for(i=4;i<8;i++)
        {
            num2=num2*10+ch[i]-'0';
        }
        if(num1>=num2)
            b=num1-num2;
        else
            b=num2-num1;
        if(b<=100)
        printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}
