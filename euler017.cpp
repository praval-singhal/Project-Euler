#include<bits/stdc++.h>
using namespace std;

map<long long,string> m;

void solve(long long n){
    long long p=1000000000000,x,y,z;
    
    while(p>1){
        x=n/p;
        if(x){
            solve(x);
            cout<<m[p]<<" ";
            n=n-x*p;
        }
        p=p/1000;
    }
    
    x=n/100;
    if(x){
        cout<<m[x]<<" "<<"Hundred ";
        n=n-x*100;
    }
    
    if(n){
        if(m.find(n)!=m.end()){
            cout<<m[n]<<" ";
        }else{
            x=n-n%10;
            cout<<m[x]<<" ";
            
            x=n%10;
            if(x)
                cout<<m[x]<<" ";
        }
    }
}

int main(){
    
    m[1]="One",m[2]="Two",m[3]="Three",m[4]="Four",m[5]="Five",m[6]="Six",m[7]="Seven",m[8]="Eight",m[9]="Nine",m[10]="Ten";
m[11]="Eleven",m[12]="Twelve",m[13]="Thirteen",m[14]="Fourteen",m[15]="Fifteen",m[16]="Sixteen",m[17]="Seventeen",m[18]="Eighteen";
m[19]="Nineteen",m[20]="Twenty",m[30]="Thirty",m[40]="Forty",m[50]="Fifty",m[60]="Sixty",m[70]="Seventy",m[80]="Eighty";
m[90]="Ninety",m[1000]="Thousand",m[1000000]="Million",m[1000000000]="Billion",m[1000000000000]="Trillion";
    
    int t;
    cin>>t;
    while(t--){
        long long n,i,j,k,x,y,z;
        cin>>n;
        
        if(n==0)
            cout<<"Zero";
        else
            solve(n);
        cout<<endl;
    }
}
