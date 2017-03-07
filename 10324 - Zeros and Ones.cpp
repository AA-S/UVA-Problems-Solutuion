#include<iostream>
#include<cstring>
#include<cmath>

using namespace std;

int main()
{
    string str;
    int n,i,j;
    while(scanf("%s",str)!=EOF)
    {
        if(str=="\n")
            break;
        cin >> n;
        cin >> i >> j;

        cout << max(i,j);

    }
}
