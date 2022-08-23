#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    map<pair<int,int>,int> m;
    int cnt=0;
    for(int i=0;i<n;i++){
    	int x,y;
    	cin >> x >> y;
    	int ucln = __gcd(abs(x),abs(y));
    	if(m[{x/ucln,y/ucln}]==0){
    		cnt++;
		} 
    	m[{x/ucln,y/ucln}]++;	
	}
	cout << cnt;
}
