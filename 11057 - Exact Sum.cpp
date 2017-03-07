#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,i,j,num[10010],m,diff,num1,num2;
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0; i<n; i++)
            scanf("%d",&num[i]);

        scanf("%d",&m);
        diff = 2000001;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i!=j && num[i]+num[j]==m)
                {
                    if(diff > max(num[i],num[j])-min(num[i],num[j]))
                    {
                        num1=min(num[i],num[j]);
                        num2=max(num[i],num[j]);
                        diff = num2 - num1;
                    }
                }
            }
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",num1,num2);
    }

    return 0;
}
