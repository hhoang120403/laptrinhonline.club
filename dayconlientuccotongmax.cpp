#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;

int main(){
	int n;
	cin >> n;
	int a[n+12];
	for(int i=0;i<n;i++) cin >>a[i];
	ll sum=0,ans=-1e18;
	for(int i=0;i<n;i++){
		sum += a[i];
		ans = max(sum,ans);
		if(sum<0) sum = 0;
	}
	cout << ans << endl;
}
