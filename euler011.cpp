#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    
    long long n,i,j,k,x,y,z=0,p;
    n=20;
    
    long long a[21][21];
    for(i=1;i<=20;i++){
        for(j=1;j<=20;j++){
            cin>>a[i][j];
        }
    }
    
    for(j=1;j<=20;j++){
        for(i=1;i<=17;i++){
            p=1;
            for(k=0;k<4;k++){
                p=p*a[i+k][j];
            }
            z=max(z,p);
        }  
    }
    for(i=1;i<=20;i++){
        for(j=1;j<=17;j++){
            p=1;
            for(k=0;k<4;k++){
                p=p*a[i][j+k];
            }
            z=max(z,p);
        }
    }
    for(i=1;i<=17;i++){
        for(j=1;j<=17;j++){
            p=1;
            for(k=0;k<4;k++){
                p=p*a[i+k][j+k];
            }
            z=max(z,p);
        }
    }
    for(i=4;i<=20;i++){
        for(j=1;j<=17;j++){
            p=1;
            for(k=0;k<4;k++){
                p=p*a[i-k][j+k];
            }
            z=max(z,p);
        }
    }
    cout<<z<<endl;
    return 0;
}
