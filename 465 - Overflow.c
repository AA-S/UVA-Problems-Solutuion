#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    long long int a,b,i,j,sum,result,c,k,l,q,f;
    char p,s[100000],t[100000];
    while(scanf("%s %c %s",s,&p,t)!=EOF)
    {
        a=0;
        b=0;
        k=0;
        l=0;
        q=0;
        i=strlen(s);
        j=strlen(t);
        printf("%s %c %s\n",s,p,t);
        if(i>10)
        {
            printf("first number too big\n");
            k=1;
        }

        if(j>10)
        {
             printf("second number too big\n");
             l=1;
        }
        if(p=='*')
        if((l==1||k==1)&&(s[0]!='0'&&t[0]!='0'))
            printf("result too big\n");


        if(l==0||k==0)
        {
            if(i<=10)
        {
            for(c=0;c<10;c++)
                a=a*10+s[c]-'0';
        }
        if(j<=10)
        {
            for(c=0;c<10;c++)
                b=b*10+t[c]-'0';
        }
        if(p=='+')
        result=a+b;
        else if(p=='*'&&(a<2147483647||b<2147483647))
            result=a*b;
        else
            result=a*b;

        if(a>2147483647)
            printf("first number too big\n");
        if(b>2147483647)
            printf("second number too big\n");
        if(result>2147483647)
            printf("result too big\n");
        }

    }
    return 0;
}
