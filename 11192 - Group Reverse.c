#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int gr,a,b,len,i,j,c;
    while(scanf("%d",&gr))
    {
        c=0;
        if(gr==0)
            break;
        char ch[1000];
        scanf("%s",ch);
        len=strlen(ch);

        a=len/gr;
        b=a-1;
        for(i=1;i<=gr;i++)
        {
            for(j=b;j>=a*c;j--)
            {
                    printf("%c",ch[j]);

            }
            b=b+a;
                c++;
        }
        printf("\n");
    }
    return 0;
}
