#include<bits/stdc++.h>

using namespace std;

int remainder(string ch,int n)
{
    int rem=0;
    for(int i=0; ch[i]!='\0'; i++)
        rem=(rem*10+ch[i]-'0')%n;
    return rem;
}

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        string num="1";
        int count=1;
        while(remainder(num,n))
        {
            //strcat(&num[0],"1");
            num = num + "1";
            //count++;
        }
        printf("%d\n",strlen(&num[0]));
    }
    return 0;
}
