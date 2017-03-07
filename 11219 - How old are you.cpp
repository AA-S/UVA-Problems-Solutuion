#include<bits/stdc++.h>

using namespace std;

int main()
{
   // freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int cd,cm,cy,bd,bm,by,test,cases;
    char c;
    scanf("%d",&test);
    //while(scanf(""))
    for(cases=1;cases<=test;cases++)
    {
        scanf("%d%c%d%c%d",&cd,&c,&cm,&c,&cy);
        scanf("%d%c%d%c%d",&bd,&c,&bm,&c,&by);
        //cout << cd<<","<<cm<<","<<cy<<"  "<<bd<<"," <<bm<<","<<by;
        if((by>cy)||(by==cy && bm>cm) ||(by==cy && bm==cm && bd>cd))
            printf("Case #%d: Invalid birth date\n",cases);

        else if((cy-by>131)||(cy-by==131 && cm>bm)||(cy-by==131 && cm==bm && cd>=bd))
            printf("Case #%d: Check birth date\n",cases);

        else if((cy-by>1)||(cy-by==1 && cm>bm) ||(cy-by==1 && cm==bm && cd>=bd))
        {
            if((cm<bm)||(cm==bm && cd<bd))
                printf("Case #%d: %d\n",cases,cy-by-1);
            else
                printf("Case #%d: %d\n",cases,cy-by);
        }


        else
            printf("Case #%d: 0\n",cases);

    }
    return 0;
}
