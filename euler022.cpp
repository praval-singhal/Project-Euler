#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,k,x,y,z;
    cin>>n;
    
    string s;
    map<string,int> m;
    for(i=0;i<n;i++){
        cin>>s;
        k=0;
        for(j=0;j<s.size();j++)
            k=k+s[j]-'A'+1;
        
        m[s]=k;
    }
    
    i=1;
    for(auto u:m){
        m[u.first]*=i;
        i++;
    }
    
    cin>>n;
    while(n--){
        cin>>s;
        cout<<m[s]<<endl;
    }
}
