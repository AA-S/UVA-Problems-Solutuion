#include<stdio.h>
int main()
{
    int a,b,num,i,j;
    char ch[100];
    while(scanf("%s",ch)!=EOF)
    {
        num=0;
        for(i=0;ch[i]!='\0';i++)
        {
            if(ch[i]<='z'&&ch[i]>='a')
                num=num+ch[i]-96;
            else
                num=num+ch[i]-38;
        }
if(num==1)
      printf("It is a prime word.\n");
else
{
    a=2;
        while(a<=num-1)
        {
            if(num%a==0)
            {
                printf("It is not a prime word.\n");
                break;
            }
            a++;
        }
        if(num==a)
            printf("It is a prime word.\n");
}



    }
    return 0;
}








