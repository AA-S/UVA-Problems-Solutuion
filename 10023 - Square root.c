#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long int x,y,n,i;
    scanf("%llu",&n);
    for(i=1;i<=n;i++)
    {
        printf("\n");
        scanf("%llu",&y);
if(y>=1)
        x=sqrt(y);

        printf("%llu\n",x);

    }
    return 0;
}
