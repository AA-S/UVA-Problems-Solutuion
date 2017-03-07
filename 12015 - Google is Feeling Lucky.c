#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int test,m;
    scanf("%d",&test);
    for(m=1;m<=test;m++)
    {
        char ch[101];
        int i,j,b,c,d;
        struct a
        {
            char url[101];
            int rel;
        };
        struct a e[10];

        for(i=0;i<10;i++)
        {
            scanf("%s%d",e[i].url,&e[i].rel);
        }

      for(i=0; i<10; i++)
    {
        for(j=i; j<10-1; j++)
        {
            if(e[i].rel<e[j+1].rel)
           {
               b=e[i].rel;
               e[i].rel=e[j+1].rel;
               e[j+1].rel=b;

               strcpy(ch,e[i].url);
               strcpy(e[i].url,e[j+1].url);
               strcpy(e[j+1].url,ch);
           }
        }
     }

     printf("Case #%d:\n",m);
     for(i=0;i<10-1;i++)
     {
         if(i==0)
            printf("%s\n",e[0].url);
             if(e[0].rel==e[i+1].rel)
                 printf("%s\n",e[i+1].url);
             else
                break;

     }

    }

    return 0;
}







