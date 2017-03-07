#include<stdio.h>
int main()
{
    int num,number=2,man,i,j,p;
    for(num=1;number<=1500;num++)
    {
        p=5;
        man=num;
        while(man>1)
        {
            if(man%2==0)
            {
                man=man/2;
                p=1;
            }
            else if(man%3==0)
            {
                man=man/3;
                p=1;
            }
            else if(man%5==0)
            {
                man=man/5;
                p=1;
            }
            else
            {
                p=0;
                break;
            }

        }
        if(p==1)
            {
                printf("%d  %d\n",number,num);
                number++;
            }
    }
}
