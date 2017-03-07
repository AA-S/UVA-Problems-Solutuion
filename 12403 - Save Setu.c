#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int operation,m,sum=0,num=0;
    scanf("%d",&operation);
    getchar();

    {
        char ch[operation+2][1000];
        int k,a,b,i,j;

        for(i=0;i<operation;i++)
        {
            gets(ch[i]);
            if(strcmp(ch[i],"report")==0)
                printf("%d\n",sum);
            else
            {
                num=0;
                for(j=0;ch[i][j]!='\0';j++)
            {
                if(ch[i][j]<='9'&&ch[i][j]>='0')
                    num=num*10+ch[i][j]-'0';
            }
            sum=sum+num;
            }

        }
    }
    return 0;
}
