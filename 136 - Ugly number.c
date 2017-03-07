#include<stdio.h>
int main()
{
    int num,n,a[500],m,p,i,number=0,man;
    for(num=1;  ; num++)
    {
        man=num;
        n=0;
        for(i=2; i<=man;)
        {
            if(man%i==0)
            {
                man=man/i;
                a[n]=i;
                n++;
            }
            else if(man%i!=0)
            {
                i++;
            }

        }
        for(m=0; m<n; m++)
        {
            if(a[m]==2||a[m]==3||a[m]==5)
                p=1;
            else
            {
                p=0;
                break;
            }

        }
        if(p==1)
            number++;

        if(number==1500)
            break;

    }
    printf("%d ",num);
    return 0;
}
