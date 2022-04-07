#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ll x,z;
    cin >> x;
    do{
    	cin >> z;
	}while(z<=x);
	ll cnt=0;
	ll sum=0;
	while(sum<=z){
		sum += x;
		x++;
		cnt++;
	}
	
	cout << cnt;
}
