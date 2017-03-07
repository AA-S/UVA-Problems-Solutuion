#include<stdio.h>
int main()
{
    char str[10000];
    int i,j,coun,a;
    {
        while(gets(str)!=NULL)
        {
             coun=0;

            for(i=0; str[i]!='\0'; i++)
            {
                    if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
                        if((str[i+1]<'A'||str[i+1]>'Z')&&(str[i+1]<'a'||str[i+1]>'z'))
                        coun++;

            }
            printf("%d\n",coun);
        }
    }
    return 0;
}
