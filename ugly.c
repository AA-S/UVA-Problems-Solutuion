#include<stdio.h>
int main()
{
    unsigned long long int num,n,a[100],m,p,i,number =772,man;
    for(num =10368000; number <= 1500 ; num++)
    {
        p = 5 ;
        man = num ;
        for(i=2 ; i <= man ;)
        {
            if(man%i == 0)
            {
                man = man/i ;
                if(i == 2 || i == 3 || i == 5)
                    p = 1 ;
                else
                {
                    p=0;
                    break;
                }


            }
            else if(man%i != 0)
                i++ ;
        }
        if(p == 1)
        {
            printf("\n%llu  %llu",number,num);
            number++ ;
        }

    }
    printf("\n\nThe 1500'th ugly number is %llu.",num-1);
    return 0 ;
}
