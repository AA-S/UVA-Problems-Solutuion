#include<stdio.h>
#include<string.h>

int main()
{
    char str[200000],ch,c;
    int i,j,check=0,a=0,p,m;
        while(gets(str))
        {
            if(strcmp(str,"*")==0)
                break;
            check = 0;a=0;
            for(i=0; str[i]!='\0'; i++)
            {
                if( ((str[i]>='A' && str[i]<='Z' )|| (str[i]>='a' && str[i]<='z')) && a==0 )
                {
                    if(str[i]>='A' && str[i]<='Z' )
                    ch = str[i]+32;
                    else ch= str[i];
                    a=1;
                    check=1;
                }
                if(str[i+1]>='A' && str[i+1]<='Z' )
                    str[i+1]=str[i+1]+32;
                //else c= str[i+1];
                if(str[i]==' ' && (str[i+1]==ch ))
                {
                    check = 1;
                }
                else if(str[i]==' ' && str[i+1]>='a' && str[i+1]<='z' && a==1)
                {
                    check = 0;
                    break;
                }
            }
           if(check==1)
                printf("Y\n");
           else
                 printf("N\n");

        }

    return 0;
}

