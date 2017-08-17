#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007

long long dp[100001][8];
long long a[]={1,2,5,10,20,50,100,200};

long long solve(long long n,long long ind){
    if(n==0)
        return 1;
    
    if(ind<0)
        return 0;
    
    if(dp[n][ind]!=-1)
        return dp[n][ind];
    
    long long i,j,k,x,y,z;
    
    dp[n][ind]=solve(n,ind-1);
    if(n>=a[ind])
    dp[n][ind]+=solve(n-a[ind],ind);
    dp[n][ind]%=mod;
    return dp[n][ind];
}

int main(){
    long long i,j,k,x,y,z;
    
    for(i=0;i<=100000;i++){
        for(j=0;j<8;j++){
            dp[i][j]=-1;
        }
    }
    
    for(i=0;i<=100000;i++){
        dp[i][7]=solve(i,7);
    }
    
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        
        cout<<dp[n][7]<<endl;
    }
}
