#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int a,b,c,i,j,n,q;
    while(scanf("%d",&n)==1)
    {

        a=2*n;
        char ch[a][200],p;
       scanf("%c",&p);
        for(i=0;i<a;i++)
        {
            gets(ch[i]);
        }

        scanf("%d",&q);
       scanf("%c",&p);

        char str[q][200];
        for(i=0;i<q;i++)
            gets(str[i]);


        for(i=0;i<q;i++)
        {
            for(j=0;j<a-1;j++)
            {
                if(strcmp(str[i],ch[j])==0)
                    printf("%s\n",ch[j+1]);
            }
        }
    }
    return 0;
}














