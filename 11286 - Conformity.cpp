#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
#include <sstream>
#include<map>

using namespace std;
int mn,in,l;
map<string,int>com;

string int_array_to_string(int int_array[], int size_of_array)
{
    ostringstream oss("");
    for (int temp = 0; temp < size_of_array; temp++)
        oss << int_array[temp];
    return oss.str();
}

int insInto(string str,int freq[])
{
        if(com.count(str)>0)
        {
            freq[com[str]]++;
            return 0;
        }
    com.insert(pair<string,int>(str,mn));
    freq[mn]++;
    mn++;
    return 0;
}

int main()
{
    //freopen("in.txt","r",stdin);
    int n,i,j,k,c[5];
    while(scanf("%d",&n) && n!=0)
    {
        mn=0;
        com.clear();
        int freq[10010]={0},result=0;
        for(int i=0; i<n; i++)
        {
            //scanf("%d%d%d%d%d",&c1,&c2,&c3,&c4,&c5);
            for(int j=0; j<5; j++)
                scanf("%d",&c[j]);
            sort(c,c+5);
            insInto(int_array_to_string(c,5),freq);

        }
        sort(freq,freq+mn,greater<int>());
        for(k=0;k<mn-1;k++)
        {
            if(freq[k]==freq[k+1])
                result += freq[k];
            else
            {
                break;
            }
        }
        result += freq[k];
            cout << result << endl;

    }

    return 0;
}
