#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long long po[10];

bool check(long long n,long long p){
    long long i,j,k,x,y,z=0;
    k=n;
    while(k){
        z+= po[k%10];
        k/=10;
    }
    
    return n==z;
}

int main() {
    long long n,i,j,k,x,y,z=0;
    cin>>n;
    
    for(i=0;i<10;i++){
        po[i]=pow(i,n);
    }
    
    k=7ll*pow(9ll,n);
    for(i=2;i<=k;i++){
        if(check(i,n)){
            z+=i;
        }
    }
    
    cout<<z<<endl;
    return 0;
}
