#include<bits/stdc++.h>
using namespace std;

long long a[1000010];

void sieve(){
    
    long long i,j,k;
    
    for(i=1;i<=1000000;i++) a[i]=i;
    
    for(i=2;i*i<=1000000;i++){
        if(a[i]==i){
            j=2;
            while(i*j<=1000000){
                a[i*j]=i;
                j++;
            }
        }
    }
}

long long ans[1010];

int main() {
    
     sieve();
    
     long long i,j,k,n=1000000,x,y=1,z=0,c=1000;

     for(i=1;i<=1000;i++)
         ans[i]=-1;
    
     for(i=1;i<1000000 && c;i++){
         
         j=(i+1);
         k=i;
         
         if(k%2==1){
             swap(j,k);
         }
         
         k=k/2;
         
         map<int,int> m;
         
         while(k>1){
             x=a[k];
             if(x==0){
                 cout<<k<<endl;
             }
             if(m.find(x)==m.end())
                 m[x]=0;
             m[x]++;
             k=k/x;
         }
         while(j>1){
             x=a[j];
             if(x==0){
                 cout<<j<<endl;
             }
             if(m.find(x)==m.end())
                 m[x]=0;
             m[x]++;
             j=j/x;
         }
         
         for(auto yo:m){
             y=y*(yo.second+1);
         }
         
         for(x=min(1000ll,y-1);x>0;x--){
             if(ans[x]==-1){
                 ans[x]=i*(i+1)/2;
                 c--;
             }else{
                 break;
             }
         }
       
         y=1;
     }
    
     int t;
     cin>>t;
     while(t--){
        long long n;
        cin>>n;
        cout<<ans[n]<<endl;
    }
}
