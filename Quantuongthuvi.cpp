#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t,a,b;
    cin >> t;
    map<int,int> m1,m2;
    while(t--){
    	cin >> a >> b;
    	m1[a+b-1]++;
    	m2[1000-(a-b)]++;
	}
	int ans=0;
	for(auto it : m1){
		ans += it.second*(it.second-1)/2;
	}
	for(auto it : m2){
		ans += it.second*(it.second-1)/2;
	}
	cout << ans;
}
