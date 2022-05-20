#include<bits/stdc++.h>
#include<stack>

using namespace std;

void solve(string n){
	long long k;
	cin >> k;
	stack<char> st,res;
	int idx=0;
	while(idx<n.size() && k>0){
		if(st.size()==0) st.push(n[idx]);
		else{
			while(!st.empty() && (n[idx])>st.top() && k>0){
				st.pop();
				k--;
			}
			st.push(n[idx]);
		}
		idx++;
	}
	while(idx<n.size()){
		st.push(n[idx]);
		idx++;	
	}
	while(k>0){
		st.pop();
		k--;
	}
	while(!st.empty()){
		res.push(st.top());
		st.pop();
	}
	
	while(!res.empty()){
		cout << res.top();
		res.pop();
	}
	cout << endl;
}

int main(){
	string n;
	cin >> n;
	int t;
	cin >> t;
	while(t--){
		solve(n);
	}
}
