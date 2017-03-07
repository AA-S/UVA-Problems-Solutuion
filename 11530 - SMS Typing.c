#include<stdio.h>
#include<string.h>
int main()
{
    int test,cases,i,j,a;
    scanf("%d",&test);
    getchar();
    for(cases=1;cases<=test;cases++)
    {
        a=0;
        char ch[1000];
        gets(ch);

        for(i=0;ch[i]!='\0';i++)
        {
            if(ch[i]=='a')
                a++;
            else if(ch[i]=='b')
                a+=2;
            else if(ch[i]=='c')
                a+=3;
            else if(ch[i]=='d')
                a+=1;
            else if(ch[i]=='e')
                a+=2;
            else if(ch[i]=='f')
                a+=3;
            else if(ch[i]=='g')
                a+=1;
            else if(ch[i]=='h')
                a+=2;
            else if(ch[i]=='i')
                a+=3;
            else if(ch[i]=='j')
                a+=1;
            else if(ch[i]=='k')
                a+=2;
            else if(ch[i]=='l')
                a+=3;
            else if(ch[i]=='m')
                a+=1;
            else if(ch[i]=='n')
                a+=2;
            else if(ch[i]=='o')
                a+=3;
            else if(ch[i]=='p')
                a+=1;
            else if(ch[i]=='q')
                a+=2;
                else if(ch[i]=='r')
                a+=3;
            else if(ch[i]=='s')
                a+=4;
            else if(ch[i]=='t')
                a+=1;
            else if(ch[i]=='u')
                a+=2;
            else if(ch[i]=='v')
                a+=3;
            else if(ch[i]=='w')
                a+=1;
            else if(ch[i]=='x')
                a+=2;
            else if(ch[i]=='y')
                a+=3;
            else if(ch[i]=='z')
                a+=4;
            else if(ch[i]==' ')
                a+=1;
        }
        printf("Case #%d: %d\n",cases,a);
    }
    return 0;
}
