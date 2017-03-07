#include<bits/stdc++.h>

using namespace std;

int bTd(string s)
{
    int d=0,len  = s.length();
    for(int  i=0; i<=len-1; i++)
    {
        if(s.at(i)=='1')
            d += pow(2,len-1-i);
    }

    return d;
}


int gcd(int number1,int number2)
{
    while(number2!=0)
    {
        number1=number1%number2;
        if(number1==0)
        {
            return number2;
        }
        number2=number2%number1;
    }
    return number1;
}


int main()
{
    int test,cases;
    scanf("%d",&test);
    string s1,s2;
    for(cases=1; cases<=test; cases++)
    {
        cin >> s1 >> s2;
        if(gcd(bTd(s1),bTd(s2))>1)
            printf("Pair #%d: All you need is love!\n",cases);
        else
            printf("Pair #%d: Love is not all you need!\n",cases);
    }

    return 0;
}
