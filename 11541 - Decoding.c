#include<stdio.h>
int main()
{
    int test,cases,m,a,b,i,j;
    char ch[1000],p;
    scanf("%d",&test);
    for(cases=1;cases<=test;cases++)
    {
        scanf("%s",ch);
         printf("Case %d: ",cases);
        for(i=0;ch[i]!='\0';i++)
        {
            a=0;
            if(ch[i]<='Z'&&ch[i]>='A')
            {
                p=ch[i];
            for(j=i+1; ;j++)
            {
                if((ch[j]<='9'&&ch[j]>='0'))
                    a=a*10+ch[j]-'0';
                else
                    break;
            }

            for(b=1;b<=a;b++)
                printf("%c",p);

            }

        }
        printf("\n");
    }
    return 0;
}
