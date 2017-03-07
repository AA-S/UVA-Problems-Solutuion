#include<stdio.h>
int main()
{
    char ch[1000000];
    int a,b,num,rem,i;
    while(scanf("%s",ch))
    {
        if(ch[0]=='0')
            break;
        rem=0;
        for(i=0;ch[i]!='\0';i++)
        {
            rem=(rem*10+ch[i]-'0')%17;
        }
        if(rem==0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
