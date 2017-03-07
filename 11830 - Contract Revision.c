#include<stdio.h>
int main()
{
    int d,a,b,i,j,p,q,r;
    char ch[1000];
    while(scanf("%d%s",&d,ch)!=EOF)
    {
        p=0;
        q=0;
        r=0;
        if(d==0&&ch[0]=='0')
            break;
        for(i=0;ch[i]!='\0';i++)
        {
            if(ch[i]-'0'!=d)
            {
                if(ch[i]>='1')
                {
                    printf("%c",ch[i]);
                    p=1;
                    r=1;
                }
                else
                {
                    if(p!=0)
                    {
                        printf("%c",ch[i]);
                        r=1;
                    }

                    else
                        r=2;
                }

               q=1;
            }

        }
        if(r==2)
                printf("0");
        if(q==0)
            printf("0");
        printf("\n");
    }
    return 0;
}
