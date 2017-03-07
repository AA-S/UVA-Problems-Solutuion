#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    char str[1000099];
    int n,i,j,cases=1;
    while(scanf("%s",str)!=EOF)
    {
        if(strcmp(str,"\n")==0)
            break;
        scanf("%d",&n);
        int a,b,check;
        printf("Case %d:\n",cases++);
        for(a=0;a<n;a++)
        {
            scanf("%d%d",&i,&j);
            check=0;
            if(i>j)
            {
                b=i;
                i=j;
                j=b;
            }

            for(b=i;b<j;b++)
            {
                if(str[b]==str[b+1])
                    ;
                else
                {
                    check=1;
                    break;
                }
            }
            if(check==0)
                printf("Yes\n");
            else
                printf("No\n");
        }



    }
    return 0;
}

