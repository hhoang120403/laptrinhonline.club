#include<bits/stdc++.h>
#include<stack>

using namespace std;

void solve(){
	string a;
	cin >> a;
	stack<int> st;
	for(char x:a){
		if(x=='('){
			st.push(0);
		}
		if(x=='H') st.push(1);
		if(x=='C') st.push(12);
		if(x=='O') st.push(16);
		if(x==')'){
			int tong = 0;
			while(st.top()!=0){
				tong += st.top();
				st.pop();
			}
			st.top() = tong;
		}
		if(x>'0' && x<='9'){
			st.top() *= int (x-'0');
		}
	}
	int res = 0;
	while(!st.empty()){
		res += st.top();
		st.pop();
	}
	cout << res << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
