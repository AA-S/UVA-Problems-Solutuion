#include<bits/stdc++.h>

using namespace std;
long long int sumOfDiv,noOfDiv;

int noAndSumOfDiv(int num)
{
    double man=sqrt(num);
    for(int i=1; i<=man; i++)
    {
        if(num%i==0)
        {
            if(i==man)
            {
                noOfDiv += 1;
                sumOfDiv += i;
            }
            else
            {
                noOfDiv += 2;
                sumOfDiv += i + num/i;
            }

        }
    }
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    //noAndSumOfDiv(6);
    //cout << noOfDiv <<" "<<sumOfDiv;
    int test,cases,a,b,k;
    scanf("%d",&test);
    for(cases=1; cases<=test; cases++)
    {
        scanf("%d%d%d",&a,&b,&k);
        a  = k*ceil(a*1.0/k);
        noOfDiv = 0;
        sumOfDiv=0;
        for(int i=a; i<=b; i += k)
        {
            noAndSumOfDiv(i);
        }

        printf("%lld %lld\n",noOfDiv,sumOfDiv);
    }

    return 0;
}

