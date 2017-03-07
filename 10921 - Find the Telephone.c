#include<stdio.h>
int main()
{
    int a,b,i,j;
    char ch[100];
    while(scanf("%s",ch)!=EOF)
    {
        for(i=0;ch[i]!='\0';i++)
        {
            if(ch[i]=='1')
                printf("1");
            else if(ch[i]=='0')
                printf("0");
            else if(ch[i]=='-')
                printf("-");
            else if(ch[i]=='A'||ch[i]=='B'||ch[i]=='C')
                printf("2");
            else if(ch[i]=='D'||ch[i]=='E'||ch[i]=='F')
                printf("3");
            else if(ch[i]=='G'||ch[i]=='H'||ch[i]=='I')
                printf("4");
            else if(ch[i]=='J'||ch[i]=='K'||ch[i]=='L')
                printf("5");
            else if(ch[i]=='M'||ch[i]=='N'||ch[i]=='O')
                printf("6");
            else if(ch[i]=='P'||ch[i]=='Q'||ch[i]=='R'||ch[i]=='S')
                printf("7");
            else if(ch[i]=='T'||ch[i]=='U'||ch[i]=='V')
                printf("8");
            else if(ch[i]=='W'||ch[i]=='X'||ch[i]=='Y'||ch[i]=='Z')
                printf("9");
        }
        printf("\n");
    }
    return 0;
}










