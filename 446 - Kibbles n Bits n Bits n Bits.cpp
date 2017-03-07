#include<bits/stdc++.h>

using namespace std;

int hexaToDecimal(char h1[])
{
    int d1=0,d2=0,b[15]={0},b2[15]={0},digit=0,j=0,k=0;
     for(int i=strlen(h1)-1,j=0 ; i>=0 ; i--,j++ )
        {
           // cout << i << endl ;
            if(h1[j]>='A' && h1[j] <= 'F')
                digit = h1[j] - 55;
            else
                digit = h1[j] - '0';
 //cout << digit<< endl ;


            d1 =   d1 + digit*pow(16,i);
        }
        return d1;
}

int decmalToBinary(int b[],int num)
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
    int test;
    scanf("%d",&test);

    for(int cases=1;cases<=test;cases++)
    {
        char h1[10],h2[10],sign,s;

        int d1=0,d2=0,b1[13]={0},b2[13]={0},digit=0,j=0,k=0,sum;

        cin >> h1 >> sign >> h2;

       d1= hexaToDecimal(h1);
       d2 = hexaToDecimal(h2);

        if(sign=='+')
        sum = d1+d2;
        else
            sum = d1-d2;
        decmalToBinary(b1,d1);
        decmalToBinary(b2,d2);
        for(int i=12;i>=0;i--)
            printf("%d",b1[i]);
        printf(" %c ",sign);
        for(int i=12;i>=0;i--)
            printf("%d",b2[i]);
        printf(" = %d",sum);
        cout << endl;
    }
    return 0;
}
