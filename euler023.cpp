#include<bits/stdc++.h>
using namespace std;

vector<int> v;
void init(){
    int i,j,k,x,y,z;
    for(i=2;i<=100000;i++){
        y=1;
        for(j=2;j*j<i;j++){
            if(i%j==0){
                y+=j;
                y+=i/j;
            }
        }
        if(j*j==i)
            y+=j;
        
        if(y>i)
            v.push_back(i);
    }
}

int main(){
    init();
    int t;
    cin>>t;
    while(t--){
        int n,i,j,k,x,y,z;
        cin>>n;
        
        i=0,j=v.size()-1;
        while(i<=j){
            if(v[i]+v[j]==n){
                cout<<"YES\n";
            //    cout<<v[i]<<" "<<v[j]<<endl;
                goto hell;
            }else if(v[i]+v[j]<n){
                i++;
            }else{
                j--;
            }
        }
        
        cout<<"NO\n";
        hell:;
    }
}
