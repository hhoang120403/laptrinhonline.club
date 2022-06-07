#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int h,l;
	cin >> h >> l;
	int a[h+1]={},b[h+1]={},c[h+1] = {};
	int res = INT_MAX,x;
	for(int i=0;i<l;i++){
		cin >> x;
		a[h-x]++; // Dem xem co bao nhieu gai o tren hang co do cao h-x
	}
	for(int i=0;i<l;i++){
		cin >> x;
		b[x]++; // Dem xem co bao nhieu gai o duoi hang co do cao x
	} 
	c[0] = a[0];
	b[0] = 0;
	for(int i=1;i<=h;i++){
		c[0] += b[i];
	}
	for(int i=1;i<=h;i++){
		c[i] = c[i-1] - b[i-1] + a[i]; // Cong thuc
		res = min(res,c[i]);
	}
	cout << res;
}
