 #include<bits/stdc++.h>
using namespace std;

long long a[10000000];

long long solve(long long n){
    if(n<10000000){
        if(a[n]!=-1)
            return a[n];
    }
    
    long long i,j,k;
    if(n%2==1){
        k=1+solve(n*3+1);
    }else{
        k=solve(n/2);
    }
    
    if(n<10000000){
        a[n]=k;
    }
    
    return k;
}

int main(){
    long long i,j,k,x,y,z;
    for(i=2;i<10000000;i++)
        a[i]=-1;
    
    a[1]=0;
    for(i=2;i<=5000000;i++){
        solve(i);
    }
    
    a[1]=1;
   
    x=a[1],y=1;
    for(i=2;i<=5000000;i++){
        if(x<=a[i]){
            x=a[i];
            y=i;
        }
        a[i]=y;
    }
    
    cin>>x;
    while(x--){
        cin>>z;
        cout<<a[z]<<endl;
    }
}
