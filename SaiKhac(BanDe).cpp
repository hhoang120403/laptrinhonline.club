#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	int a[n+1],res=0;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n-1;i++)
	 	for(int j=i+1;j<n;j++) res += abs(a[j]-a[i]);
	cout << res; 	
}
