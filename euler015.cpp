#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define mod 1000000007

long long dp[600][600];

long long solve(int n,int m){
    if(dp[n][m]!=-1)
        return dp[n][m];
    
    dp[n][m]=0;
    if(n)
        dp[n][m]+=solve(n-1,m);
    if(m)
        dp[n][m]+=solve(n,m-1);
    
    dp[n][m]%=mod;
    
    return dp[n][m];
}

int main() {
    long long i,j,k,x,y,z;
    for(i=0;i<=500;i++){
        for(j=0;j<=500;j++){
            dp[i][j]=-1;
        }
    }
    
    dp[0][0]=1;
    solve(500,500);
    
    cin>>z;
    while(z--){
        cin>>x>>y;
        cout<<dp[x][y]<<endl;
    }
}
