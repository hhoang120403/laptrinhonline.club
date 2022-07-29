#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	int s1=0,s2=0;
	for(int i=0;i<n;i++) {		
		int x; cin >> x;
		s1 += x;
		s2 += x*x;		
	}
	int res=INT_MAX;
	for(int i=-100;i<=100;i++){
		int s = s2-2*i*s1+n*i*i;
		if(res>s) res = s;
	}
	cout << res;
}

