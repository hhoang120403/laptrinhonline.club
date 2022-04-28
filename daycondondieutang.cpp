#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	vector<int> a(n);
	for(int i=0;i<n;i++) cin >> a[i];
	vector<int> b(n,INT_MAX);
	b[0] = INT_MIN;
	int res = 0;
	for(int x:a){
		int k = lower_bound(b.begin(),b.end(),x) - b.begin();
		b[k] = x;
		res = max(res,k);
	}
	cout << res;
}
