#include<stdio.h>
int main()
{
    int test,m,i,j,fm,ff,mm;
    char ch[100000],p;
    scanf("%d",&test);
    scanf("%c",&p);
    m=1;
    while(m<=test)
    {
        gets(ch);

        fm=0;
        ff=0;
        mm=0;

        for(i=1;ch[i]!='\0';i++)
        {
            if(ch[i]=='M'&&ch[i-1]=='M')
                mm++;
            else if(ch[i]=='F'&&ch[i-1]=='F')
                ff++;
            else if((ch[i]=='M'||ch[i]=='F')&&(ch[i-1]=='M'||ch[i-1]=='F'))
               fm++;
        }
        if(ff!=mm || fm==1)
            printf("NO LOOP\n");
        else
            printf("LOOP\n");

        m++;

    }
    return 0;
}
