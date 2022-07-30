#include<bits/stdc++.h>

using namespace std;

void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a<b){
		a = b;
		cout << "TIEN ";
	} 
	else if(a>b){
		a = b;
		cout << "LUI ";
	} 
	else cout << "DUNG ";
	if(a<c) cout << "TIEN" << endl;
	else if(a>c) cout << "LUI" << endl;
	else cout << "DUNG" << endl;
}

int main(){
	int n;
	cin >> n;
	while(n--){
		solve();
	}
}
