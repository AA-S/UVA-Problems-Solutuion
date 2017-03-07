#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,num=0,i,j,p,n,mark1,mark2;
    while(scanf("%d",&n))

    {
        p=0;
        if(n==0)
            break;
        if(n==4)
            p=1;
        else
        for(a=3; a<=n/2; a=a+2)
        {
            mark1=0;
            i=2;
            if(a==1)
                mark1=1;
            while(i<=sqrt(a))
            {
                if(a%i==0)
                {
                    mark1=1;
                    break;
                }

                i++;
            }
            if(mark1==0)

            {

                b=n-a;
                mark2=0;
                j=2;
                while(j<=sqrt(b))
                {
                    if(b%j==0)
                    {
                        mark2=1;
                        break;
                    }

                    j++;
                }
                if(mark2==0)
                {
                   // j=b;
                    p++;
                }

//                    if(b==j)
//                    {
//                        if(n==a+b)
//                        {
//                            // printf("%d = %d + %d\n",n,a,b);
//                            p++;
//                        }
//                    }
                //if(p==1)
                //break;


            }
            //if(p==1)
            //break;
        }
        //if(p==0)
        printf("%d\n",p);

    }
    return 0;

}
