#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,k;
	cin >> n >> k;
	int a[n+4];
	a[0] = 1;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		a[i] += a[i-1];
	}
	int res=0;
	for(int i=0;i<=n-1;i++){
		for(int j=i+1;j<=n;j++){
			if(n-i<=res) break;
			if((a[j]-a[i])%k==0) res = max(res,j-i);
		}
	}
	cout << res;
}
