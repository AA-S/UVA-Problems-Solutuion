#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    double H,M,i,j,k;
    while(scanf("%lf:%lf",&H,&M))
    {
        if(H==0 && M==0) break;
        i = H * 5+5.0*M/60;
        if(abs(i-M)>30)
            j = 60-abs(i-M);
        else
            j=abs(i-M);

        j =j*6.00;

        if(j>180)
            printf("%.3lf",360.0-j);
        else
            printf("%.3lf",j);
        cout << endl;

    }
    return 0;
}
