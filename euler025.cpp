#include<bits/stdc++.h>
using namespace std;

int digits(int n){
    if(n==1)
        return n;
    
    long double d=((long double)n*log10(1.6180339887498948))-((long double)(log10(5.00)) / 2.0);
    return ceil(d);
}

map<int,int> m;

int main(){
    int i,j,k,x,y,z;
    i=1;
    
    while(k<=5000){
        k=digits(i);
        if(m.find(k)==m.end())
            m[k]=i;
        i=i+1;
    }
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<m[n]<<endl;
    }
}
