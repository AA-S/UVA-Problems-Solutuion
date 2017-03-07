#include<bits/stdc++.h>

using namespace std;

int decimalToBinary(int num)
{
    int counter=0;
    while(num)
    {
        if(num%2)
            counter++;
        num=num/2;
    }

    return counter;
}

int main()
{
    //freopen("in.txt","r",stdin);
    int test,num,hexa;
    scanf("%d",&test);

    for(int cases=1;cases<=test;cases++)
    {
        int dn=0,i=0;
        scanf("%d",&num);
        hexa = num;

        while(hexa)
        {
            int a = hexa%10;
            dn = dn + a*pow(16,i++);
            hexa = hexa/10;
        }

        printf("%d %d\n",decimalToBinary(num),decimalToBinary(dn));

    }
    return 0;
}
