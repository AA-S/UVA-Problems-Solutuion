#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char sbin[100];
    int num,a,b,c,i,j;
    while(scanf("%s",sbin))
    {
        if(sbin[0]=='0')
            break;
        num=0;
        for(i=0;i<strlen(sbin);i++)
       {
            num=num+(sbin[i]-'0')*((pow(2,(strlen(sbin)-i))-1));
       }

       printf("%d\n",num);
    }
    return 0;

}
