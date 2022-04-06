#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	long long res=0;
	while(n--){
		int x;
		cin >> x;
		res += x/k;
	}
	cout << res*3*k;
}
