#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int x,y;
	cin >> x >> y;
	queue< pair<int,int> > q;
	q.push({x,y});
	map< pair<int,int>,int > m;
	m[{x,y}]=1;
	int cnt=1;
	while(!q.empty()){
		int a = q.front().first;
		int b  = q.front().second;
		q.pop();
		if(a%2==0 && m[{b,a/2}]==0){
			q.push({b,a/2});
			m[{b,a/2}]++;
			cnt++;
		}
		if(b%2==1 && m[{(b+1)/2,a}]==0){
			q.push({(b+1)/2,a});
			m[{(b+1)/2,a}]++;
			cnt++;
		}
	}
	cout << cnt;
}
