#include<bits/stdc++.h>

using namespace std;

long long int coin[]={1,8,27,64,125,216,343,512,729,1000,1331,1728,2197,2744,3375,4096,4913,5832,6859,8000,9261}; //value of coins available
long long int make=18,m; //we will try to make 18
long long int dp[22][30010];
long long int call(long long int i,long long int amount)
{
    if(i>=21) { //All coins have been taken
        if(amount==0)return 1;
        else return 0;
    }
    if(dp[i][amount]!=-1) return dp[i][amount]; //no need to calculate same state twice
    long long int ret1=0,ret2=0;
    if(amount-coin[i]>=0) ret1=call(i,amount-coin[i]); //try to take coin i
    ret2=call(i+1,amount); //dont take coin i
    return dp[i][amount]=ret1+ret2; //storing and returning.

}
int main()
{
    // freopen("in","r",stdin);
    memset(dp,-1,sizeof(dp));
    while(scanf("%lld",&make)!=EOF)
    {
        m = call(0,make);
        printf("%lld\n",m);
    }
    return 0;
}
