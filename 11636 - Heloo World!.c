#include<stdio.h>
int main()
{
    int a,fine,line,i,m,paste=0,n,cases=1;
    while(scanf("%d",&n))
    {
        if(n<0)
            break;
        line=1;
        m=1;
        paste=0;

        for(i=1;1;)
        {
            i =i*2;

           if(n!=1)
            paste++;

            if(i>=n)
                break;


        }

        printf("Case %d: %d\n",cases++,paste);
       }
        return 0;
    }


