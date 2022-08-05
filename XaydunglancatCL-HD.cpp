#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
	int n,m;
	cin >> n >> m;
	int a[1001]={};
	int res=0;
	for(int i=1;i<=n;i++){
		int x; cin >> x;
		a[x]++;
	}
	for(int i=1;i<=m;i++){
		int x; cin >> x;
		if(a[x]){
			a[x]--;
			res++;
		}
	}
	cout << res;
}
