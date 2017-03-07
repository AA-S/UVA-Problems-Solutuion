#include<stdio.h>
#include<string.h>
char yr[100000000];
int main()
{
    int j=0,p;

    while(scanf("%s",yr)!=EOF)
    {
        long long int rem[6]={0},i;
        if(j!=0)
           printf("\n");
        j=1;
        p=0;
         for(i=0;yr[i]!='\0';i++)
        {
            rem[0]=(rem[0]*10+yr[i]-'0')%400;
            rem[1]=(rem[1]*10+yr[i]-'0')%100;
            rem[2]=(rem[2]*10+yr[i]-'0')%4;
            rem[3]=(rem[3]*10+yr[i]-'0')%15;
            rem[4]=(rem[4]*10+yr[i]-'0')%55;
        }

        if((rem[1]!=0&& rem[2]==0) ||rem[0]==0)
        {
            printf("This is leap year.\n");
            if(rem[3]==0)
                printf("This is huluculu festival year.\n");
            if(rem[4]==0)
                printf("This is bulukulu festival year.\n");
        }
        else if(rem[3]==0)
        {
            printf("This is huluculu festival year.\n");

        }
        else
           printf("This is an ordinary year.\n");

    }
    return 0;
}
