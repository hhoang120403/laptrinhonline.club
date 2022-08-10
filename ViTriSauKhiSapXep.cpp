#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	int a[n+4];
	map<int,int> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		m[a[i]] = i;
	}
	sort(a,a+n);
	for(auto x:m){
		cout << x.second << " ";
	}
}
