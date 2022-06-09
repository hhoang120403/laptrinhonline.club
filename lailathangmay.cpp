#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
   	int n,k;
   	cin >> n >> k;
   	int a[n+1];
   	for(int i=1;i<=k;i++) cin >> a[i];
   	int s,f;
   	cin >> s >> f;
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
		for(int i=1;i<=k;i++){
			if(p+a[i]<=n && p+a[i]>0 && !mp[p+a[i]]){
				q.push(p+a[i]);
				mp[p+a[i]] = mp[p]+1;
			}
		}
	}
	cout << "-1";
}
