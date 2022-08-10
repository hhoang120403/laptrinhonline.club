#include<bits/stdc++.h>
#include<math.h>
using namespace std;

bool KtraSNT(long long num){
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0) return false;
	}
	return true;
}

long long TimUoc(long long num){
	for(int i=2;i<=sqrt(num);i++){
		if(num%i==0){
			long long res = num/i;
			return res;
		}
	}
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		long long num;
		cin >> num;
		if(KtraSNT(num)==true) cout << num << " la nguyen to" << endl;
		else{
			cout << num << " la hop so vi chia het cho " << TimUoc(num) << endl;
		} 
	}
}
