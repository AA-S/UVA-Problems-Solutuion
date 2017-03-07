#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    int arr[]={0,2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881,0},n;
    while(scanf("%d",&n) && n!=0)
    {
        if(n<14)
            printf("%d\n",arr[n]);
        else
            printf("0\n");
    }
    return 0;
}
