#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
int ok;
ll a[501];
vector<ll> res;

void next(string &s){
	int i = s.length()-1;
	while(i>=0 && s[i]=='9'){
		s[i] = '0';
		i--;
	}
	if(i == -1){
		ok = 0;
	}
	else{
		s[i] = '9';
	}
}

int main(){
	string s(14,'0');
	ok = 1;
	next(s);
	while(ok){
		res.push_back(stoll(s));
		next(s);
	}
	for(int i=1;i<=500;i++){
		for(ll x:res){
			if(a[i]==0 && x%i==0){
				a[i] = x;
			}
		}
	}
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		cout << a[n] << endl;
	}
}
