#include<bits/stdc++.h>

using namespace std;

void sum(int a){
	if(a==1) cout << "1/1";
	else{
		long long ts=1,ms=1;
		for(int i=2;i<=a;i++){
			ts = ts*i + ms;
			ms *= i;
			long long ucln = __gcd(ts,ms);
			ts /= ucln;
			ms /= ucln;
		}
		cout << ts << "/" << ms;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		sum(a);
		cout << endl;
	}	
}
