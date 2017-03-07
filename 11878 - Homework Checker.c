#include<stdio.h>
int main()
{
    char ch[100],p;
    int a,b=0,c,i,j,num,num1,num2;
    while(scanf("%s",ch)!=EOF)
    {
        num=0;
        num1=0;
        num2=0;
        for(i=0; ;i++)
        {
            if(ch[i]=='+'||ch[i]=='-')
                break;
            else
            num1=num1*10+ch[i]-'0';
        }

        for(i=i+1;ch[i]!='=';i++)
            num2=num2*10+ch[i]-'0';
        for(i=i+1; ;i++)
        {
            if((ch[i]=='\0')||ch[i]=='?')
                break;
            else
             num=num*10+ch[i]-'0';
        }

           if(ch[i]!='?'&&(num==num1+num2||num==num1-num2))
            b++;



    }
   printf("%d\n",b);

    return 0;
}
