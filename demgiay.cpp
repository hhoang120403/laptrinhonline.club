#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	map<string,int> l,r;
	for(int i=1;i<=n;i++){
		string x,tmp=""; 
		cin >> x;
		for(int i=1;i<x.size();i++){
			tmp += x[i];
		}
		if(x[0]=='R') r[tmp]++;
		else l[tmp]++;
	}
	int cnt=0;
	for(auto k:r){
		cnt += min(k.second,l[k.first]);
	}
	cout << cnt;
}
