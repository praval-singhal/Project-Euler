#include<bits/stdc++.h>
using namespace std;
#define pb(x) push_back(x)
#define mk(x,y) make_pair(x,y)

vector<int> sq;
int ans[3001];
int cal[3001];

void pre(){
	
	int i,j,k,x,y,z;
	
	for(i=1;i<=3000;i++){
		sq.pb(i*i);
        cal[i]=-1;
	}
	
	for(i=1;i<=3000;i++){
		for(j=i+1;i*i+j*j<=9000000;j++){
			if(binary_search(sq.begin(),sq.end(),i*i+j*j)){
				k=sqrt(i*i+j*j);
				if(i+j+k<=3000){
                    cal[i+j+k]=max(cal[i+j+k],i*j*k);
                }
			}
		}
	}
	
}


int main(){
	pre();
	int t;
	cin>>t;
	while(t--){
		int n;
        cin>>n;
		cout<<cal[n]<<endl;
	}
	
}
