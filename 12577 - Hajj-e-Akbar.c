#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ch[100];
    int i,cases=1,j,b;
    while(1)
    {
        gets(ch);
        if(strcmp(ch,"*")==0)
            break;
        if(strcmp(ch,"Hajj")==0)
            printf("Case %d: Hajj-e-Akbar\n",cases);
        else if(strcmp(ch,"Umrah")==0)
            printf("Case %d: Hajj-e-Asghar\n",cases);
        cases++;
    }
    return 0;
}
