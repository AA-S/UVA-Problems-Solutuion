#include<bits/stdc++.h>

using namespace std;

int decimalToBinary(unsigned int b[],unsigned int num)
{
    int i=0;
    while(num!=0)
    {
        if(num%2==0)
            b[i++]=0;
        else
            b[i++]=1;
        num=num/2;
    }
    return 0;
}

int main()
{
    unsigned int num1,num2,sum;
    while(scanf("%u%u",&num1,&num2)!=EOF)
    {
        unsigned int bin1[33]={0},bin2[33] ={0},ans[33]={0};
        decimalToBinary(bin1,num1);
        decimalToBinary(bin2,num2);

        for(int i=31; i>=0; i--)
        {
            if((bin1[i]==1 && bin2[i]==0) || (bin1[i]==0 && bin2[i]==1))
                ans[i]=1;
            else
                ans[i]=0;
        }

        sum=0;
        for(int i=0;i<32; i++)
        {
            sum = sum + ans[i]*pow(2,i);
        }


        printf("%u\n",sum);

    }
    return 0;
}
