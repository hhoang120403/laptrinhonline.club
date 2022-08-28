#include<bits/stdc++.h>
#include<math.h>

using namespace std;
const long long mod = 1e9+7;

typedef long long ll;

ll degree(int n, int p){
	long long res = 0;
	for(int i=p;i<=n;i*=p){
		res += n/i;
		res %= mod;
	}
	return res;
}

int check_snt(int n){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}
	return n>1;
}

ll count(int n){
	ll res = 1;
	for(int i=2;i<=n;i++){
		if(check_snt(i)){
			res *= (degree(n,i)+1);
			res %= mod;
		}
	}
	return res;
}
 
int main(){
    int n;
    cin >> n;
    cout << count(n) << endl;
}
