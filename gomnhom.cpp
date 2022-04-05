#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+12];
	map<int, int> m;
	for(int i=0;i<n;i++){
		cin >> a[i];
		m[a[i]]++;
	}
	int res=0;
	for(int i=0;i<n;i++){
		if(m[a[i]]!=0){
			res = max(res,max(m[a[i]]+m[a[i]-1],m[a[i]]+m[a[i]+1]));
			m[a[i]] = 0;
		}
	}
	cout << res;
}
