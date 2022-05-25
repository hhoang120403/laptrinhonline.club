//Can bang 2 ve, lay max Left
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	int n,x;
	cin >> n;
	priority_queue<int> l;
	priority_queue<int, vector<int>, greater<int>> r;
	for(int i=1;i<=n;i++){
		cin >> x;
		if(i%2) l.push(x);
		else r.push(x);
		if(i>1 && l.top()>r.top()){
			l.push(r.top()); r.pop();
			r.push(l.top()); l.pop();
		}
		cout << l.top() << " ";
	}
} 
