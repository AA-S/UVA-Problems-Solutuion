#include<stdio.h>
int main()
{
    int test,cases,m,a=0,b,i,j;
    char ch[1000],p;

    while(scanf("%s",ch)!=EOF)
    {
        for(i=0;     ;i++)
        {
            if((ch[i]<='9'&&ch[i]>='0'))
                a=a+ch[i]-'0';
            else if(ch[i]=='!')
                printf("\n");
            else
            {

                 for(b=1;b<=a;b++)
                 {
                      if(ch[i]=='b')
                        printf(" ");
                     else
                        printf("%c",ch[i]);
                 }
                      a=0;
            }
             if(ch[i]=='\0')
             {
                  printf("\n");
                  break;
             }


            }
    }
    return 0;
}
