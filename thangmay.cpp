#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
   	int n,k,m,s,f;
   	cin >> n >> k >> m >> s >> f;
   	queue<int> q;
   	q.push(s);
   	map<int,int> mp;
   	mp[s] = 1;
   	while(!q.empty()){
   		int p = q.front(); 
		q.pop();
		if(p==f){
			cout << mp[p]-1;
			return 0;
		}
		if(p+k<=n && !mp[p+k]){
			q.push(p+k);
			mp[p+k] = mp[p]+1;
		} 
		if(p-m>0 && !mp[p-m]){
			q.push(p-m);
			mp[p-m] = mp[p]+1; 		
		}
	}
	cout << "-1";
}
