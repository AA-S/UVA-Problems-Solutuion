#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[100000];
    int count=1,i,k;
    while(gets(str)!=NULL)
    {
        for(int i=0;i<strlen(str);i++)
        {
            if(str[i]=='"' && count%2==1)
            {
                printf("``");
                count++;
            }
            else if(str[i]=='"' && count%2==0)
            {
                printf("''");
                count++;
            }
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }

    return 0;
}
