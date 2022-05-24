#include<bits/stdc++.h>
#include<math.h>

using namespace std;

void init(long long a[32]){
	a[0] = 0;
	for(int i=1;i<=31;i++){
		a[i] = a[i-1] + pow(2,i-1);
	}
}

int main(){
	int t,x;
	cin >> t;
	long long a[32];
	init(a);
	while(t--){
		cin >> x;
		cout << a[x] << endl;
	}
}
