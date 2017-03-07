#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int test,m;
    scanf("%d",&test);
    getchar();
    for(m=1;m<=test;m++)
    {
        long long int comb=1,a,b,i,j,len,fact=1,freq[30]={0};
        char ch[30];
        gets(ch);
        len=strlen(ch);
        for(i=len;i>=1;i--)
        comb=comb*i;

        for(i=0;i<len;i++)
        {

        for(j=0;j<len;j++)
        {
            if(j<i)
            {
                if(ch[i]==ch[j])
                  {
                      freq[j]++;
                      break;
                  }
            }
            else if(i==j)
            {
                freq[j]++;
                break;
            }

        }


    }
         for(i=0;i<len;i++)
        {
            fact=1;
            if(freq[i]>1)
            {
                for(b=freq[i];b>=1;b--)
                    fact=fact*b;

                comb=comb/fact;
            }

        }
          printf("Data set %d: %lld\n",m,comb);

    }
    return 0;
}
