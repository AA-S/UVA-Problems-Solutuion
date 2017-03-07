#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int test,far,sTreat,gTreat,cases=1;

    while(scanf("%d",&test) && test!=0)
    {
        gTreat=0,sTreat=0;
        for(int mn=1; mn<=test; mn++)
        {
            scanf("%d",&far);
            if(far)
                sTreat++;
            else
                gTreat++;
        }
        printf("Case %d: %d\n",cases++,sTreat-gTreat);
    }

    return 0;
}


