#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char ch[1000][1050],m,n;
    int mx=0,in=0;
//    freopen("out.txt","w",stdout);
//    freopen("in.txt","r",stdin);

    while(gets(ch[mx])!=NULL)
        mx++;

    while(in<mx)
    {
        int i,j,len,a,b,freq[5000]= {0};
        len=strlen(ch[in]);

        for(i=0; i<len; i++)
        {

            for(j=0; j<len; j++)
            {
                if(j<i)
                {
                    if(ch[in][i]==ch[in][j])
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

        for(i=0; i<len; i++)
        {
            for(j=i; j<len-1; j++)
            {
                if(freq[i]>=freq[j+1])
                {
                    a=freq[i];
                    freq[i]=freq[j+1];
                    freq[j+1]=a;

                    if(freq[i]==freq[j+1])
                    {
                        if(ch[in][i]<ch[in][j+1])
                        {
                            m=ch[in][i];
                            ch[in][i]=ch[in][j+1];
                            ch[in][j+1]=m;
                        }
                    }
                    else
                    {
                        m=ch[in][i];
                        ch[in][i]=ch[in][j+1];
                        ch[in][j+1]=m;
                    }

                }
            }
        }

        for(i=0; i<len; i++)
        {
            if(freq[i]!=0)
            {
                printf("%d %d\n",ch[in][i],freq[i]);

            }

        }
if(in!=mx-1)
        printf("\n");

        in++;

    }
    return 0;

}
