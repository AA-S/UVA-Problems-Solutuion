#include<stdio.h>
int summation(int);
int main()
{

    char name1[50],name2[50];
    while( gets(name1)!=NULL&&gets(name2)!=NULL)
    {
         int sum1=0,sum2=0,i,j,k=0;
        float percent;

        for(i=0;name1[i]!='\0';i++)
        {

            if(name1[i]>='a'&&name1[i]<='z')
            sum1=sum1+name1[i]-96;
            else if(name1[i]>='A'&&name1[i]<='Z')
            sum1=sum1+name1[i]-64;

        }

        while(1)
        {
            sum1=summation(sum1);
            if(sum1<10)
                break;
        }

        for(i=0;name2[i]!='\0';i++)
        {
            if(name2[i]>='a'&&name2[i]<='z')
            sum2=sum2+name2[i]-96;
            else if(name2[i]>='A'&&name2[i]<='Z')
            sum2=sum2+name2[i]-64;

        }

        while(1)
        {
            sum2=summation(sum2);
            if(sum2<10)
                break;
        }

        if(sum1>=sum2)
            percent=(float)sum2/sum1*100;
        else
            percent=(float)sum1/sum2*100;

        printf("%.2f %c\n",percent,'%');

    }
    return 0;
}

int summation(int sum)
{
    int a,num=0;
    while(sum!=0)
    {
        a=sum%10;
        sum=sum/10;
        num=num+a;
    }
    return num;
}
