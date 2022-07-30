#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m;
	cin >> n >> m;
	int a[n+4];
	for(int i=1;i<=n;i++) cin >> a[i];
	int f[m+1]={};
	int res = 0;
	for(int i=1;i<=m;i++){
		int x,y; cin >> x >> y;
		for(int j=x;j<=y;j++){
			f[i] += a[j];
		}
	}
	for(int i=1;i<=m;i++){
		if(f[i]>0) res += f[i];
	}
	cout << res;
}
