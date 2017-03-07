#include<iostream>
#include<cstdio>


using namespace std;

int position(int arr[],int val,int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] ==val)
            return i;
    }
}

int main()
{
    int n,m,i,j;
    while(scanf("%d%d",&n,&m))
    {
        if(n==0 && m==0)
            break;
        int arr[n+5],fp,sp;

        for(int k=0; k<n; k++)
            arr[k] = k+1;

        for(int l=1; l<=m; l++)
        {
            scanf("%d%d",&i,&j);
            fp = position(arr,i,n);
            sp = position(arr,j,n);


            if(fp>sp)
            {
                for(int a=sp; a<fp; a++)
                {
                    int tmp = arr[a];
                    arr[a] = arr[fp];
                    arr[fp] = tmp;

                }

            }

        }

        for(int a=0; a<n; a++)
        {
            if(a!=n-1)
                printf("%d ",arr[a]);
            else
                printf("%d\n",arr[a]);
        }

    }
    return 0;
}
