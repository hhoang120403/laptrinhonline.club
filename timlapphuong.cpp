#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	long long res = 192;
	while(n>=2){
		res += 250;
		n--;
	}
	cout << res;
}
