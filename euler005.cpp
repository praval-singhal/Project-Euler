#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	while(t--){
		long long n,i,j,k,ans=1;
		cin>>n;
		
		long long a[n+1];
		for(i=2;i<=n;i++){
			a[i]=i;
		}	
		
		for(i=2;i<=n;i++){
			ans=ans*a[i];
			for(j=i+1;j<=n;j++){
				if(a[j]%a[i]==0){
					a[j]=a[j]/a[i];
				}
			}
		}
		
		cout<<ans<<endl;
	}
}
