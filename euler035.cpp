/*
	  I was poor in English, so I learned C++
	  Shut your mouth and let code do the talk 

	  Written by: Praval Singhal
	  Date: 11/07/2017
*/

#include<bits/stdc++.h>
using namespace std;

#define space(s) getline(cin,s)
#define ll long long 
#define db double
#define ldb long double 
#define pii pair<int,int>
#define pll pair<long long,long long>
#define mk(x,y) make_pair(x,y)
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pair<int,int> > 
#define vpll vector<pair<long long,long long> >
#define pb(x) push_back(x)
#define fir first
#define sec second
#define all(x) x.begin(),x.end()
#define FILE freopen("input.in", "rt", stdin),freopen("output.txt", "wt", stdout);
#define IOS ios_base::sync_with_stdio(0);
#define mod 1000000007

int scan(){
	char r; bool st=false; int re=0;
	while(true){ r=getchar();
		if((r-'0'<0 || r-'0'>9) && r!='-' && !st) continue; if((r-'0'<0 || r-'0'>9) && r!='-' && st) break; if(st)re*=10;
		st=true; re+=r-'0'; }return re; }

ll expo(ll b,ll e){
	ll a=1;
	while(e){ if(e%2) a=(a*b)%mod; e/=2; b=(b*b)%mod;} return a;}
	

//-----------------------------------------------BAHUT HO GYI BAKCHODI,AB CODING HOGI----------------------------------------------------//

bool p[10000000];

void sieve(){
    
    int i,j,k;
    for(i=0;i<10000000;i++){
         p[i]=true;
    }
    
    p[0]=p[1]=false;
    
    i=2,j=2;
    while(i*j<10000000){
        p[i*j]=false;
        j++;
    }
    i=3,j=2;
    while(i*j<10000000){
        p[i*j]=false;
        j++;
    }
    
    for(i=5;i*i<10000000;i+=6){
        if(p[i]){
            j=2;
            while(i*j<10000000){
                p[i*j]=false;
                j++;
            }
        }
        if(p[i+2]){
            j=2;
            while((i+2)*j<10000000){
                p[(i+2)*j]=false;
                j++;
            }
        }
    }
}

long long  ans[1000001];

int main(){
    
    sieve();
    
    int i,j,k,x,y,z,po;
    
    for(i=0;i<=1000000;i++){
        ans[i]=0;
    }
    
    for(i=2;i<=1000000;i++){
        if(p[i]){
            
            string s;
            x=i;
           
            while(x){
                s=s+char(x%10+'0');
                x=x/10;
            }
         
            reverse(all(s));
                      
            bool yo=true;
            
            for(j=0;j<s.size();j++){
                
                k=0,x=0;
                while(k<s.size()){
                    x=x*10+s[(j+k)%s.size()]-'0';
                    k++;
                }
                
                if(p[x]==false){
                    yo=false;
                    break;
                }   
            }
            
            
            if(yo)
            ans[i]=(ans[i-1]+i);
            else
                ans[i]=ans[i-1];
        }else{
            ans[i]=ans[i-1];
        }
    }
    
    
    int n;
    cin>>n;
    cout<<ans[n]<<endl;

}
