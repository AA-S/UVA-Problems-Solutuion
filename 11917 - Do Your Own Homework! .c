#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int test,m;
    scanf("%d",&test);
    for(m=1;m<=test;m++)
    {
        int n,c,b,i,j,d,p=0;
        char ch[25];
        scanf("%d",&n);
        struct a
        {
            char sub[25];
            int day;
        };
        struct a e[n];

        for(i=0;i<n;i++)
        {
            scanf("%s%d",e[i].sub,&e[i].day);
        }
        scanf("%d",&d);
        scanf("%s",ch);

       for(i=0;i<n;i++)
       {
           j=strcmp(ch,e[i].sub);

           if(j==0)
           {
               c=e[i].day;
               p=1;
               break;
           }
           else
           {
               p=2;
           }
       }

       if(p==1)
       {
           if(c<=d)
           {
               printf("Case %d: Yesss\n",m);
           }
           else if(c<=d+5)
           {
               printf("Case %d: Late\n",m);
           }
           else
           {
               printf("Case %d: Do your own homework!\n",m);
           }
       }
       else if(p==2)
       {
           printf("Case %d: Do your own homework!\n",m);
       }

    }
    return 0;
}
