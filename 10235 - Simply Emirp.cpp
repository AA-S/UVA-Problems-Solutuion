#include<bits/stdc++.h>

bool prime(int num)
{
    int i=2;
    bool ans=false;
    if(num<=0)
        return false;
    while(i<=sqrt(num))
    {
        if(num%i==0)
            return false;
        i++;
    }
    return true;
}

bool emirp(int n)
{
    int rev=0,m=n;
    while(n)
    {
        rev = rev*10 + n%10;
        n=n/10;
    }
    if(prime(rev) && m!=rev)
        return true;
    else
        return false;
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(!prime(n))
             printf("%d is not prime.\n",n);
        else if(emirp(n))
            printf("%d is emirp.\n",n);
        else
            printf("%d is prime.\n",n);
    }
    return 0;
}
