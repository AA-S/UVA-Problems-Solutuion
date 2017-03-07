#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int noOfSyllables(char str[])
{
    int counter=0;
    int len = strlen(str);
    for(int i=0; i<len; i++)
    {
        if((str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y')
                &&(str[i+1]!='a' && str[i+1]!='e' && str[i+1]!='i' && str[i+1]!='o' && str[i+1]!='u' && str[i+1]!='y'))
        {
            counter++;
        }
    }
    return counter;
}

int main()
{
    //freopen("in.txt","r",stdin);
    int len,noS[3],j,line;
    char ch[1000],str[1000];
    while(gets(ch))
    {
        if(strcmp(ch,"e/o/i")==0)
            break;
        len = strlen(ch);
        line = 0;
        j=0;
        for(int i=0; i<=len; i++)
        {
            if(ch[i]=='/' || ch[i]=='\0' )
            {
                str[j] = '\0';
                noS[line++] = noOfSyllables(str);
                j=0;
            }
            else
            {
                str[j++] = ch[i];
            }
        }
        if(noS[0]==5 && noS[1] == 7 && noS[2] == 5)
            printf("Y\n");
        else if(noS[0]!=5 && noS[1] == 7 && noS[2] == 5)
            printf("1\n");
        else if(noS[0]==5 && noS[1] != 7 && noS[2] == 5)
            printf("2\n");
        else if(noS[0]==5 && noS[1] == 7 && noS[2] != 5)
            printf("3\n");
        else if(noS[0]!=5)
            printf("1\n");
        else if(noS[1]!=7)
            printf("2\n");
        else if(noS[2]!=5)
            printf("3\n");
    }

    return 0;
}
