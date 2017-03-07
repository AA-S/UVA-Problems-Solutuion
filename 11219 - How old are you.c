#include<stdio.h>
int main()
{
    long int i,cases,test,a,b,day1,day2,mon1,mon2,yr1,yr2,yr,diff;
    char cd[20],bd[20];
    scanf("%ld",&test);

    for(cases=1;cases<=test;cases++)
    {
        day1=0;
        day2=0;
        mon1=0;
        mon2=0;
        yr1=0;
        yr2=0;
        printf("\n");
          scanf("%s%s",cd,bd);
        for(i=0;i<2;i++)
        {
            day1=day1*10+cd[i]-'0';
            day2=day2*10+bd[i]-'0';
        }
        for(i=3;i<5;i++)
        {
            mon1=mon1*10+cd[i]-'0';
            mon2=mon2*10+bd[i]-'0';
        }

        for(i=6;i<10;i++)
        {
            yr1=yr1*10+cd[i]-'0';
            yr2=yr2*10+bd[i]-'0';
        }

         a=day1+mon1*12+yr1*365;
         b=day2+mon2*12+yr2*365;
         diff=a-b;
         yr=diff/365;

printf("Case #%ld: ",cases);


    if(a<b)
        printf("Invalid birth date\n");
    else if(yr>130)
    {
            printf("Check birth date\n");
    }
    else
        printf("%ld\n",yr);

    }
return 0;

}
