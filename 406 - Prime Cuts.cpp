#include<bits/stdc++.h>

using namespace std;

bool prime(int num)
{
    int i=2;
    while(i<=sqrt(num))
    {
        if(num%i==0)
            return false;
        i++;
    }
    return true;
}

int main()
{
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int n[100000],c[100000],mx=0,in=0;
    while(scanf("%d%d",&n[mx], &c[mx])!=EOF)
        mx++;
    while(in<mx)
    {
        int arr[n[in]+5],i=0,j=0,len=0,counter=0;
        for(int num=1; num<=n[in]; num++)
        {
            if(prime(num))
                arr[len++] = num;
        }

        if(c[in]*2<=len && len%2==0)
        {
            printf("%d %d: ",n[in],c[in]);//i<len-len/4
            for(i = len/2 - c[in]; counter<=c[in]*2 -1; i++)
            {
                printf("%d",arr[i]);
                if(counter!=c[in]*2 -1)
                    printf(" ");
                else printf("\n");
                counter++;

            }
        }
        else if(c[in]*2-1<=len && len%2==1)
        {
            printf("%d %d: ",n[in],c[in]);//i<len-len/4
            for(i = len/2 - c[in]+1; counter<=c[in]*2 -1-1; i++)
            {
                printf("%d",arr[i]);
                if(counter!=c[in]*2 -1-1)
                    printf(" ");
                else printf("\n");
                counter++;

            }
        }
        else
        {
             printf("%d %d: ",n[in],c[in]);
            for(i = 0; i<len; i++)
            {
                printf("%d",arr[i]);
                if(i!=len-1)
                    printf(" ");
                else printf("\n");
                //counter++;

            }
        }

        //if(in!=mx-1)
            printf("\n");
        in++;

    }

    return 0;
}
