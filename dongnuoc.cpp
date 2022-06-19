#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n,m,k;
	cin >> n >> m >> k;
	if(k%__gcd(n,m)){
		cout << "Khong dong duoc nuoc";
		return 0;
	}
	queue<pair<int,int>> q;
	map<pair<int,int>,int> mp;
	q.push({0,0});
	mp[{0,0}] = 0;
	while(!q.empty()){
		pair<int,int> tmp = q.front();
		q.pop();
		int a = tmp.first;
		int b = tmp.second;
		int c = a+b;
		if(k==a || k==b){
			cout << mp[tmp];
			return 0;
		}
		vector<pair<int,int>> v{
			{a,0},{0,b},{a,m},{n,b},{max(0,c-m),min(c,m)},{min(c,n),max(0,c-n)}
		};
		for(auto x:v){
			if(mp.find(x)==mp.end()){
				mp[x] = mp[tmp]+1;
				q.push(x);
			}
		}
	}
}
