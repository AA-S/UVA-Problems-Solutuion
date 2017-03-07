#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int  main()
{
    //freopen("in.txt","r",stdin);
    int test,cases,n,num[25],sum,m;
    char c;
    scanf("%d",&test);

    for(cases=1; cases<=test; cases++)
    {
        n=0,sum=0,m=0;
        while(scanf("%d%c",&num[n++],&c)!=EOF)
        {

            sum += num[n-1];
            if(c=='\n')
                break;
        }


        if(sum%2==1)
        {
            printf("NO\n");
            continue;
        }

        else
        {
            sum=sum/2;
            sort(num,num+n,greater<int>());
            for(int i=0; i<n; i++)
            {
                m = num[i];

                for(int j=i; j<n; j++)
                {
                    if(i!=j && m+num[j]<=sum)
                    {
                        m += num[j];
                    }
                }
                if(m==sum)
                {
                    printf("YES\n");
                    break;
                }

            }
            if(sum!=m)
                printf("NO\n");

        }

    }

    return 0;
}
