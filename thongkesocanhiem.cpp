#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	stack<int> st;
	while(n--){
		int x;
		cin >> x;
		if(st.empty() || x!=st.top()) st.push(x);
	}
	int m;
	cin >> m;
	int rank = st.size();
	while(m--){
		int x;
		cin >> x;
		while(!st.empty() && x>=st.top()){
			st.pop();
			rank--;
		}
		st.push(x);
		cout << ++rank << endl;
	}
}
