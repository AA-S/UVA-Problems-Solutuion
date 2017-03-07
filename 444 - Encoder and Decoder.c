#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include<bits/stdc++.h>

using namespace std;

int main()
{
    char ch[1000];
    while(gets(ch)!=NULL)
{
    int i,j,a,num,n,m,c,ab=0,bc;
    for(i=strlen(ch)-1;i>=0;i--)
    {
        if(ch[i]>='0'&&ch[i]<='9')
        {
             m=(ch[i]-'0');
             ab=ab*10+m;
            if((ab>='a'&&ab<='z')||(ab>='A'&&ab<='Z')||ab==' '||ab=='!'||ab==','||
                ab=='.'||ab==':'||ab==';'||ab=='?')
             {
                 printf("%c",ab);
                 ab=0;
             }
        }
        else
        {
            n=0;
        num=ch[i];
        while(num!=0)
        {
            a=num%10;
            num=num/10;
           printf("%d",a);
        }

        }

    }
    printf("\n");
}

    return 0;

}
