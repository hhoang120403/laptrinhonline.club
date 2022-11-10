#include<bits/stdc++.h>
using namespace std;


// Thuat toan Kruskal: Tim cay khung nho nhat
struct edge{
	int u,v,w;
};

int parent[10005]={};

bool cmp(edge a, edge b){
	return a.w < b.w;
}

int find(int v){
	return parent[v]==0?v:(parent[v] = find(parent[v]));
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n,m;
	cin >> n >> m;
	edge a[m];
	for(edge &e:a){
		cin >> e.u >> e.v >> e.w;
	}
	
	// Sap xep lai cac canh theo trong so tang dan
	sort(a,a+m,cmp);
	
	long long res=0;
	for(auto e:a){
		int x = find(e.u), y = find(e.v); // Tim cha cua dinh dang xet
		if(x!=y){ // Neu 2 dinh khac cha thi xet
			parent[x] = y;
			parent[e.u] = y;
			res += e.w;
		}
	}
	cout << res;
}
