#include<stdio.h>
int main()
{
    char ch[10000];
    int test,cases,a,b,i,j,m,sets[20];
    scanf("%d",&test);
    for(cases=1;cases<=test;cases++)
    {
        int rem[20]={0},p=9,n;
        scanf("%s",ch);
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&sets[i]);


        for(i=0;i<n;i++)
        {
            for(j=0;ch[j]!='\0';j++)
            {
                rem[i]=(rem[i]*10+ch[j]-'0')%sets[i];
            }
        }
        for(m=0;m<n;m++)
        {
            if(rem[m]==0)
                p=0;
            else
            {
                 p=1;
                 break;
            }

        }
        if(p==0)
            printf("%s - Wonderful.\n",ch);
        else
            printf("%s - Simple.\n",ch);
    }
    return 0;
}
