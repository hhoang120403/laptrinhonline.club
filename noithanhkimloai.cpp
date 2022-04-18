#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[n+12];
	for(int i=0;i<n;i++) cin >> a[i];
	priority_queue<int,vector<int>,greater<int>> pq;
	for(int i=0;i<n;i++) pq.push(a[i]);
	ll res = 0;
	while(pq.size()>1){
		ll t1 = pq.top(); pq.pop();
		ll t2 = pq.top(); pq.pop();
		res += t1+t2;
		pq.push(t1+t2);
	}
	cout << res;
}
