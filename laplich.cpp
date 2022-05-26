#include<bits/stdc++.h>

using namespace std;

int main(){
 	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n, res=0, t=0; 
	cin >> n;
	pair<int,int> a[n];
	for(auto &x:a) cin >> x.second >> x.first;
	sort(a,a+n);
	for(auto x:a){
		if(x.second > t){
			res++;
			t = x.first;
		}
	}
	cout << res;
	return 0;
}
