#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<cstdlib>

using namespace std;

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
    //cout << gcd(0,0);
    //freopen("in.txt","r",stdin);
    int test,cases,num[125],sum,m,result;
    int j,n;
    char ch[100000];
    scanf("%d",&test);
    getchar();

    for(cases=1; cases<=test; cases++)
    {
        char str[100];
        result = -1;
        j=0,n=0;
        gets(ch);

        int len = strlen(ch);
        for(int  i=0; i<=len; i++)
        {
            if(ch[i]>='0' && ch[i]<='9')
            {
                str[j++] = ch[i];
            }
            else if((ch[i] == ' '||ch[i] == '\0') && j>0)
            {
                str[j] = '\0';
                num[n++] = atoi(str);
                j=0;
            }
        }


        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!=j)
                {
                    int res = gcd(num[i],num[j]);
                    if(res>result)
                        result = res;
                }

            }
        }

        printf("%d\n",result);

    }

    return 0;

}
