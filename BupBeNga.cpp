#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,k;
	cin >> n >> k;
	int a[n+4];
	int sum=0;
	for(int i=0;i<n;i++){
		cin >> a[i];
		sum += a[i];
	}
	sort(a,a+n,greater<int>());
	int first=0,last=n;
	for(int i=1;i<n;i++){
		if(a[first]-a[i]>=k){
			sum -= a[i];
			first++;
			last--;
		}
	}
	cout << last << " " << sum;
}
