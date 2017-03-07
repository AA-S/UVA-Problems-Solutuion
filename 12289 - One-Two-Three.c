#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n,test,cases,a,b,i,j,len;
    char ch[100];
    scanf("%d",&test);
    for(cases=1;cases<=test;cases++)
    {
        i=0;
        j=0;
        n=0;
        scanf("%s",ch);
        len=strlen(ch);
        if(len==3)
        {
            if((ch[0]=='o' && ch[1]=='n') ||(ch[0]=='o' && ch[2]=='e') || (ch[1]=='n' && ch[2]=='e'))
                printf("1\n");
            else
                printf("2\n");
        }
        else
            printf("3\n");
    }

    return 0;
}
