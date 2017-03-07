#include<stdio.h>
int main()
{
    int test,cases,m,n,i,j,num,man;
    scanf("%d",&test);
    for(cases=1;cases<=test;cases++)
    {
        int arr[15] = {0};
        scanf("%d",&n);
        for(num=1;num<=n;num++)
        {
            man=num;
            while(man!=0)
            {
                m=man%10;
                man=man/10;
                if(m==0)
                    arr[0]++;
                else if(m==1)
                    arr[1]++;
                 else if(m==2)
                    arr[2]++;
                 else if(m==3)
                    arr[3]++;
                 else if(m==4)
                    arr[4]++;
                 else if(m==5)
                    arr[5]++;
                 else if(m==6)
                    arr[6]++;
                 else if(m==7)
                    arr[7]++;
                 else if(m==8)
                    arr[8]++;
                 else if(m==9)
                    arr[9]++;
            }
        }
        for(i=0;i<10;i++)
        {
            if(i!=9)
             printf("%d ",arr[i]);
             else
             printf("%d",arr[i]);
        }

        printf("\n");
    }
    return 0;
}
