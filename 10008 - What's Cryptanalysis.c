#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{

    int n,x,y;
    while(scanf("%d",&n)!=EOF)
    {
        getchar();
        char ch[n][100000],m,p,str[1000000];


         for(x=0;x<n;x++)
            gets(ch[x]);

         int i,j,len,a,b,freq[1000]={0},mn=0;

         for(i=0;i<n;i++)
         {
             for(j=0;ch[i][j]!='\0';j++)
             {
                 if(ch[i][j]>='A'&&ch[i][j]<='Z')
                    {
                        str[mn++]=ch[i][j];
                    }
                else if(ch[i][j]>='a'&&ch[i][j]<='z')
                    str[mn++]=ch[i][j]-32;
             }

         }

     str[mn]='\0';

     for(i=0;i<mn;i++)
        {

        for(j=0;j<mn;j++)
        {
            if(j<i)
            {
                if(str[i]==str[j])
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

    for(i=0;i<mn;i++)
    {
        for(j=i;j<mn-1;j++)
        {
            if(freq[i]<freq[j+1])
            {
                a=freq[i];
                freq[i]=freq[j+1];
                freq[j+1]=a;

                        m=str[i];
                       str[i]=str[j+1];
                        str[j+1]=m;

            }
            else if(freq[i]==freq[j+1])
            {
                if(str[i]>str[j+1])
                {
                    m=str[i];
                    str[i]=str[j+1];
                    str[j+1]=m;
                }
            }
        }
    }

    for(i=0;i<mn;i++)
    {
        if(freq[i]!=0)
        {
             printf("%c %d\n",str[i],freq[i]);

        }

    }



    }
return 0;

}
