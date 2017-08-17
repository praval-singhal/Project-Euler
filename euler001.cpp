#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,i,j,k;
        cin>>n;
        
        k=0;
        
        k= ((n-1)-(n-1)%3 + 3)*(((n-1)-(n-1)%3)/3)/2;
        k+=((n-1)-(n-1)%5 + 5)*(((n-1)-(n-1)%5)/5)/2;
        k-=((n-1)-(n-1)%15 + 15)*(((n-1)-(n-1)%15)/15)/2;
        
        cout<<k<<endl;
    }
    return 0;
}
