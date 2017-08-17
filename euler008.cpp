#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i,j,k,x,y,z=0;
		string s;
		cin>>n>>k;
		cin>>s;
	
	    for(i=0;i+k-1<n;i++){
	    	y=1;
			for(j=i;j<i+k;j++){
				y=y*(s[j]-'0');
			}
			z=max(z,y);
		}
		cout<<z<<endl;
	}
}
