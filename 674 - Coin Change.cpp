#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    int num,man,pan,counter;

    while(scanf("%d",&num)!=EOF)
    {
        //counter = 1;
        int a=num/5;
        counter = 1 + a;

        if((--a)%2==0)
        {
            a=a/2;
            counter = counter + a*(a+1);
        }
        else
        {
            if(a>0)
            {
                a= 1 + a/2;
                counter = counter + a*a;
            }
        }

        int i=1,j=0,k;
        if(num>24)
            while(1)
            {
                k = 25*i++;
                if(k>num) break;
                man = num - k;

                while(1)
                {
                    k = man - 10*j++;

                    if(k>=0)
                        counter = counter + k/5 + 1;
                    else
                        break;
                }j=0;

            }

       int c=0;
       i=1;
       j=0;
        if(num>49)
            while(1)
            {
                k = 50*i++;
                if(k>num) break;
                pan = num - k;
                while(1)
                {
                    k = 25*c++;
                    if(k>pan) break;
                    man = pan - k;

                    while(1)
                    {
                        k = man - 10*j++;

                        if(k>=0)
                            counter = counter + k/5 + 1;
                        else
                            break;
                    }j=0;
                }c=0;
            }


        printf("%d\n",counter);
    }

    return 0;
}
