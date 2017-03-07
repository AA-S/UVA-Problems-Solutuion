#include<stdio.h>
int main()
{
    int a,b,c=1,m=0,n,num[110],sum;
    while(1)
    {
        scanf("%d",&num[m]);
        if(num[m]==0)
            break;
        m++;
    }
    for(n=0;n<=m;n++)
          {
              //if(num[n]<0)
                //num[n]=-1*num[n];
//else
                //nu[n]=num[n];
              if(c==1)
              {
                  printf("PERFECTION OUTPUT\n");
                  c++;
              }
              if(num[n]==0)
              {
                    printf("END OF OUTPUT\n");
                    break;
              }

              sum=0;
              for(a=1;a<=(num[n]/2+1);a++)
                {
                    if(num[n]%a==0)
                      {
                        sum=sum+a;
                      }
                }
            if(num[n]==sum)
                printf("%5d  PERFECT\n",num[n]);
            else if(sum<num[n])
               printf("%5d  DEFICIENT\n",num[n]);
            else if(sum>num[n])
                printf("%5d  ABUNDANT\n",num[n]);


          }


    return 0;
}
