#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,k;
	cin >> n >> k;
	int du=n%k;
	long long res=1;
	for(int i=du;i<=n;i+=k){
		res *= i;
	}
	cout << res;
}
