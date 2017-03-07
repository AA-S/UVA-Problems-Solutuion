#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char str[50];
    int a,b,i,j,k=1;
    while(1)
    {
        gets(str);
        if(strcmp(str,"#")==0)
            break;

        if(strcmp(str,"HELLO")==0)
            printf("Case %d: ENGLISH\n",k);
        else if(strcmp(str,"HOLA")==0)
            printf("Case %d: SPANISH\n",k);
        else if(strcmp(str,"HALLO")==0)
            printf("Case %d: GERMAN\n",k);
        else if(strcmp(str,"BONJOUR")==0)
            printf("Case %d: FRENCH\n",k);
        else if(strcmp(str,"CIAO")==0)
            printf("Case %d: ITALIAN\n",k);
        else if(strcmp(str,"ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n",k);
        else
            printf("Case %d: UNKNOWN\n",k);

        k++;
    }
    return 0;
}
