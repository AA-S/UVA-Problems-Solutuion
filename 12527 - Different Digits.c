#include<stdio.h>
int main()
{
    int arr[100],i,j,a,b,n,m,num,p,man;
    while(scanf("%d%d",&n,&m)!=EOF)
    {
       b=0;
        for(num=n;num<=m;num++)
        {
            man=num;
            a=0;
            arr[a++]=man%10;
            man=man/10;
            p=2;
            while(man!=0)
            {
                arr[a++]=man%10;
                man=man/10;
                for(i=0;i<a-1;i++)
                {
                    if(arr[i]==arr[a-1])
                    {
                        p=1;
                        break;
                    }
                    else
                        p=2;
                }
                if(p==1)
                    break;
            }
            if(p==2)
                b++;

        }
        printf("%d\n",b);
    }
    return 0;
}
