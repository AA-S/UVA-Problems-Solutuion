#include<bits/stdc++.h>

using namespace std;

//int prime(int num)
//{
//    int i=2,counter=2,root=sqrt(num);
//
//    while(i<=root)
//    {
//        if(num%i==0)
//        {
//            if(i==(1.0*num/i))
//                 counter =counter + 1;
//            else
//            counter =counter + 2;
//        }
//
//          //  counter =counter + 1;
//            //return false;
//        i++;
//    }
//    return counter;
//}

int main()
{
    long long int n;
    while(scanf("%lld",&n) && n!=0)
    {
        long long int counter=0,divider=sqrt(n);
        double div= sqrt(n);
        if(div!=divider)
        {
            printf("no\n");
        }
        else
            printf("yes\n");

    }
    return 0;
}
