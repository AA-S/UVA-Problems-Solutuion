#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,m,n;
    //scanf("%d",&test);
     while( scanf("%d%d",&m,&n))
     {
       if(m==0 && n==0)
        break;
       int ma  = max(m,n),mi=min(m,n),i,j,ans=0;

         if(mi==1)
             ans = ma;

          else if(mi==2 && ma>4 && ma%4<3)
        {
            ans = 4*(ma/4) + 2*(ma%4);
        }

        else if(mi==2 && ma%2==1)
            ans=ma+1;
        else if(ma==3 && mi==2)
            ans = 4;
        else if(ma==2 && mi==2)
            ans=4;

        else if(ma%2==0)
            ans = mi*ma/2;
        else if(ma%2==1)
        {
            if(mi%2==0)
            {
                ans = ((ma+1)/2) * mi/2  + ((ma-1)/2) *   mi/2;
            }
            else
            {
                ans = ((ma+1)/2) * (mi+1)/2  + ((ma-1)/2) *   (mi-1)/2;
            }
        }

        printf("%d knights may be placed on a %d row %d column board.\n",ans,m,n);
     }
     return 0;
}

