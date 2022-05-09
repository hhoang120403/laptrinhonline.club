#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n+1],cnt=0;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n-2;i++){
		if(a[i]==1 && a[i+1]==1 && (a[i+2]==1 || a[i+2]==0)){
			cnt++;
			i += 2;
		}
	}
	cout << cnt;
}
