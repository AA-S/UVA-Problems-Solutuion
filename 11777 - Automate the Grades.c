#include<stdio.h>
int main()
{
    int t1,t2,fn,att,ct[3],i,j,test,cases=1,a,b;
    double avg,total,pec;
    scanf("%d",&test);
    for(cases=1;cases<=test;cases++)
    {
            scanf("%d%d%d%d%d%d%d",&t1,&t2,&fn,&att,&ct[0],&ct[1],&ct[2]);
            for(i=0;i<3;i++)
                for(j=i;j<2;j++)
            {
                if(ct[i]<ct[j+1])
                {
                    a=ct[i];
                    ct[i]=ct[j+1];
                    ct[j+1]=a;
                }
            }
            avg=(double)(ct[0]+ct[1])/2;

            total=t1+t2+fn+att+avg;

            if(total>=90)
                printf("Case %d: A\n",cases);
            else if(total>=80)
                printf("Case %d: B\n",cases);
            else if(total>=70)
                printf("Case %d: C\n",cases);
            else if(total>=60)
                printf("Case %d: D\n",cases);
            else if(total<60)
                printf("Case %d: F\n",cases);
    }
    return 0;


}
