#include<bits/stdc++.h>
using namespace std;

#define scanspace(x) scanf("%[^\n\t]s,x")
#define pb push_back
#define mp make_pair
#define gc getchar
#define gcu getchar_unlocked
#define mem(x,y) memset(x,y,sizeof(x))
#define sc2(x,y) sc(x),sc(y)
#define sc3(x,y,z) sc(x),sc(y),sc(z)
#define sc4(x,y,z,w) sc(x),sc(y),sc(z),sc(w)
#define sc5(x,y,z,u,v) sc(x),sc(y),sc(z),sc(u),sc(v)
#define sc6(x,y,z,u,v,w) sc(x),sc(y),sc(z),sc(u),sc(v),sc(w)
#define all(x) x.begin(),x.end() 
#define ll long long
#define db double
#define ldb long double 
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mint map<int,int>
#define miit map<int,int>::iterator
#define mll map<ll,ll>
#define mllit map<ll,ll>::iterator
#define vi vector<int>
#define vvi vector<vector<int> >
#define vl vector<ll>
#define vvll vector<vector<ll> >
#define vpii vector<pair<int,int> >
#define vppii vector<pair<int,pair<int,int> > > 
#define vpll vector<pair<long long,long long> >
#define vppll vector<pair<long long,pair<long long,long long> > >
#define frp(x,y,z) for(x=y;x<z;x++)
#define frm(x,y,z) for(x=y;x>=z;x--)
#define sec second
#define fir first
#define FILE freopen("input.txt", "rt", stdin),freopen("output.txt", "wt", stdout);
#define mod 1000000007

template<typename T>
void sc(T &x){
	char r;
	bool start=false,neg=false;
	long long int ret=0;
	while(true){
		r=gc();
		if((r-'0'<0 || r-'0'>9) && r!='-' && !start)
		continue;
		if((r-'0'<0 || r-'0'>9) && r!='-' && start)
		break;
		if(start)ret*=10;
		start=true;
		if(r=='-')neg=true;
		else ret+=r-'0';}
	if(!neg)
	x=ret;
	else
	x=-ret;
}

template<typename T>
T gcd(T a,T b){
	if(b==0)
	return a;
	return gcd(b,a%b);
}

template <typename T>
T expo(T base, T exp, T modulus) {
  base %= modulus;
  T result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}

//???????????????????????????? POTHA ENDS HERE ?????????????????????????????????????????

bool ispalin(int n){
	vector<int> a;
	while(n){
		a.pb(n%10);
		n=n/10;
	}
	
	for(int i=0;i<a.size();i++){
		if(a[i]!=a[a.size()-1-i])
		return false;
	}
	return true;
}

vector<int> v;
void init(){
	for(int i=100;i<1000;i++){
		for(int j=100;j<1000;j++){
			if(ispalin(i*j))
			v.pb(i*j);
		}
	}
}

int main(){
	//ios_base::sync_with_stdio(0);
    //cin.tie(0);
    init();
    sort(all(v));
	int t=1;
	sc(t);
	while(t--){
		int n,i;
		cin>>n;
		
		i=lower_bound(v.begin(),v.end(),n)-v.begin();
		if(i==v.size())
		i--;
		
		while(v[i]>=n)
		i--;
		
		cout<<v[i]<<endl;
	}
}
