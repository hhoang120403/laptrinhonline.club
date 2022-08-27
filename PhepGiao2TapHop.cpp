#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n;
    map<int,int> mp;
    int x;
    for(int i=0;i<n;i++){
    	cin >> x;
    	if(!mp[x]) mp[x]++;
	}
	cin >> m;
	for(int i=0;i<m;i++){
		cin >> x;
		if(mp[x]==1) mp[x]++;
	}
	for(auto x:mp){
		if(x.second==2) cout << x.first << " ";
	}
}
