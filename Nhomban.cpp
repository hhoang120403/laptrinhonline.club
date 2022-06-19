#include<bits/stdc++.h>

using namespace std;

const int N=1e5+5;
vector<int>k[N];
vector<int>check(N,1);
int x;

void dfs(int u){
	check[u]=0;
	x++;
	for(int i=0;i<k[u].size();i++){
		int v = k[u][i];
		if(check[v]==1) dfs(v);
	}
}

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m;
	cin >> n >> m;
	for(int i=0;i<m;i++){
		int u,v;
		cin >> u >> v;
		k[u].push_back(v);
		k[v].push_back(u);
	}
	int d=0,res=0;
	for(int i=1;i<=n;i++){
		if(check[i]){
			dfs(i);
			res = max(res,x);
			d++;
			x = 0;
		}
	}
	cout << d << endl << res;
}
