#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;
long long res[104];

void solve(int i){
	long long n,sum=0;
	cin >> n;
	sum = (n%mod)*((n+1)%mod)/2;
	sum %= mod;
	res[i] = ( (sum%mod)*(sum%mod) ) % mod;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t;
	cin >> t;
	for(int i=0;i<t;i++){
		solve(i);
	}
	for(int i=0;i<t;i++){
		cout << res[i] << " ";
	}
}
