#include<bits/stdc++.h>
#include<deque>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k;
	cin >> n >> k;
	deque<int> q;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	for(int i=1;i<=k;i++){
		while(!q.empty() && a[i]>a[q.back()]) q.pop_back();
		q.push_back(i);
	}
	cout << a[q.front()] << " ";
	for(int i=k+1;i<=n;i++){
		if(q.front()<=i-k){
			q.pop_front();
		}
		while(!q.empty() && a[i]>=a[q.back()]){
			q.pop_back();
		}
		q.push_back(i);
		cout << a[q.front()] << " ";
	}
}
