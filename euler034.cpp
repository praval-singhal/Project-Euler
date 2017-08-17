#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int f[10];
long long ans[1000000];

int main() {
    f[0]=1;
    for(int i=1;i<10;i++)
        f[i]=f[i-1]*i;
    
    long long i,j,k,x,y,z,n;
    cin>>n;
    
    ans[9]=0;
    for(i=10;i<=n;i++){
        z=0;
        x=i;
        while(x){
            y=x%10;
            z+=f[y];
            x=x/10;
        }
        
        if(z%i==0){
            ans[i]=ans[i-1]+i;
        }else{
            ans[i]=ans[i-1];
        }
    }
    
    cout<<ans[n]<<endl;
    
    return 0;
}
