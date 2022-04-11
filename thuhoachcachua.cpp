#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int a[n+12];
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n,greater<int>());
	long long res = 0;
	for(int i=0;i<n;i++){
		if(a[i]-k*i<=0) break;
		res += a[i] - k*i;
	}
	cout << res;
}
