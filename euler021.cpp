#include<bits/stdc++.h>
using namespace std;

long long sum[100001],ans[100001];
bool a[100001],yo[100001];

void init(){
    long long i,j,k,x,y,z;
    
    for(i=1;i<=100000;i++)
        a[i]=yo[i]=false;
    
    ans[0]=0;
    
    for(i=1;i<=100000;i++){
        if(!yo[i]){
            z=1;
            for(j=2;j*j<i;j++){
                if(i%j==0){
                    z+=j;
                    z+=i/j;
                }
            }
            if(j*j==i)
            z+=j;
            sum[i]=z;
            yo[i]=true; 
        }
        
        z=sum[i];
        
        if(z==i)
            continue;
        
        if(z>100000){
            y=1;
            for(j=2;j*j<z;j++){
                if(z%j==0){
                   y+=j;
                   y+=z/j;
                }
            }
            if(j*j==z){
               y+=j;
            }
                
            if(i==y)
            a[i]=true;
                
        }else{
            if(!yo[z]){
               y=1;
               for(j=2;j*j<z;j++){
                  if(z%j==0){
                      y+=j;
                      y+=z/j;
                  }
               }
               if(j*j==z)
                  y+=j;
                    
               sum[z]=y;
               yo[z]=true;
            }
             
            y=sum[z];
            
            if(i==y){
                a[i]=a[z]=true;
            }
        }
    }
    
    for(i=1;i<=100000;i++){
        if(a[i]){
            ans[i]=ans[i-1]+i;
        }else{
            ans[i]=ans[i-1];
        }
    }
}

int main(){
    init();  
    int t;
    cin>>t;
    while(t--){
        long long n,i;
        cin>>n;
      /*  for(i=1;i<=n;i++){
            if(a[i]){
                cout<<i<<" "<<sum[i]<<" "<<sum[sum[i]]<<endl;
            }
        }*/
        cout<<ans[n]<<endl;
    }
}
