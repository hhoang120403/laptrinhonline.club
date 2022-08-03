#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
	int n,k;
	cin >> n >> k;
	int check[12]={},a[12];
	for(int i=1;i<=k;i++){
		int x; cin >> x;
		check[x] = 1;
	}
	int j=0;
	queue<int> q;
	for(int i=0;i<10;i++){
		if(!check[i]){
			a[j] = i;
			if(a[j]!=0) q.push(a[j]);
			j++;
		}
	}
	int top = 0;
	while(top<n){
		top = q.front();
		q.pop();
		if(top>=n){
			cout << top;
			return 0;
		}
		for(int i=0;i<j;i++){
			q.push(top*10+a[i]);
		}
	}
}
