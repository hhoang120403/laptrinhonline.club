#include<bits/stdc++.h>
using namespace std;

void solve1(int a[], int n){
	int d1=0,d2=0;
	for(int i=0;i<n;i++){
		if(a[i]%3) d1++;
		if(a[i]>=0){
			int sqr = sqrt(a[i]);
			if(sqr*sqr==a[i]) d2++;
		}
	}
	cout << d1 << endl;
	cout << d2 << endl;
}

void solve3(int a[], int n){
	int cnt=0;
	for(int i=0;i<n-1;i++){
		if(a[i]==0) continue;
		if(a[i+1]%a[i]==0) cnt++;
	}
	cout << cnt << endl;
}

void solve4(int a[], int n){
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]%2==0) cnt++;
	}
	int res = cnt*(cnt-1)/2 + (n-cnt)*(n-cnt-1)/2; 
	cout << res << endl;
}

void solve5(int a[], int n){
	int cnt=0;
	for(int i=0;i<n-2;i++){
		if(a[i]<a[i+1] && a[i+1]<a[i+2]) cnt++;
	}
	cout << cnt << endl;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	int a[n+4];
	for(int i=0;i<n;i++) cin >> a[i];
	solve1(a,n);
	solve3(a,n);
	solve4(a,n);
	solve5(a,n);
}

