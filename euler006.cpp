#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long n,i,j,k,x,y,z;
		cin>>n;
		
		i=n*(n+1)/2;
		i=i*i;
		
		j=n*(n+1)*(2*n+1)/6;
		
		cout<<i-j<<endl;
	}
}
