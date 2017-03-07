#include<stdio.h>
int main()
{

    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int x,y,z,test,i,j,dollar;
    scanf("%d",&test);
    for(i=1; i<=test; i++)
    {
        scanf("%d%d%d",&x,&y,&z);
        dollar = z*(x+(x-y))/(x+y);
        if(dollar<=0)
            printf("0\n");
        else
            printf("%d\n",dollar);
     }
        return 0;
}



//#include<stdio.h>
//int main()
//{
//    int x,y,z,test,i,j,dollar;
//    float a,b,c;
//    scanf("%d",&test);
//
//    for(i=1;i<=test;i++)
//    {
//        scanf("%d%d%d",&x,&y,&z);
//
//        a=(float)z/(x+y);
//         if(x==0&&y==0&&z==0)
//             printf("0\n");
//        else
//        if(x>=y)
//        {
//             j=x-y;
//             b=a*x+a*j;
//             dollar=b;
//        }
//
//        else
//        {
//              j=y-x;
//             b=a*x-a*j;
//             dollar=b;
//        }
//        if(dollar<0)
//            printf("0\n");
//        else
//          printf("%d\n",dollar);
//
//    }
//    return 0;
//}



