#include<stdio.h>
#include<stdio.h>

int main()
{
    char ch[1500];
    int i,rem;
    while(scanf("%s",ch))
    {
        rem=0;
        if(strcmp(ch,"0")==0)
            break;
        else
        {
            for(i=0; ch[i]!='\0'; i++)
                rem=(rem*10+ch[i]-'0')%11;

            if(rem==0)
                printf("%s is a multiple of 11.\n",ch);
            else
                printf("%s is not a multiple of 11.\n",ch);
        }

    }
    return 0;
}
