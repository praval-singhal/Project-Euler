#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long a[20][20],dp[20][20],n;

long long solve(long long i,long long j){
    if(i==n)
        return a[i][j];
    if(dp[i][j]!=-1)
        return dp[i][j];
    
    dp[i][j]=a[i][j]+max(solve(i+1,j),solve(i+1,j+1));
    return dp[i][j];
}

int main() {
    int t;
    cin>>t;
    while(t--){
        long long i,j,k,x,y,z;
        cin>>n;
        
        for(i=1;i<=n;i++){
            for(j=1;j<=i;j++){
                cin>>a[i][j];
                dp[i][j]=-1;
            }
        }
        
        cout<<solve(1,1)<<endl;
        
    }
}
