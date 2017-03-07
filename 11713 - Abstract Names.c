#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int test,cases,i,j,m,a,b,len1,len2;
    char ch[1000],str[1050];
    scanf("%d",&test);
    for(cases=1;cases<=test;cases++)
    {
        scanf("%s",ch);
        scanf("%s",str);

        len1=strlen(ch);
        len2=strlen(str);

        a=0;
        if(len1==len2)
        {
            for(i=0;ch[i]!='\0';i++)
            {
                if((ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u')&&(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'))
                    a=1;
                else if(ch[i]==str[i])
                 a=1 ;
                else if(ch[i]!=str[i])
                {
                    printf("No\n");
                    a=2;
                    break;
                }


            }
        }
        else
            printf("No\n");
        if(a==1)
            printf("Yes\n");


    }
    return 0;
}







