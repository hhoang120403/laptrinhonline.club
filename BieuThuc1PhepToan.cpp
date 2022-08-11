#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	while(n--){
		int a,b;
		char c;
		cin >> a >> c >> b;
		if(c=='+') cout << a+b << endl;
		if(c=='-') cout << a-b << endl;
		if(c=='/'){
			if(b) cout << a/b << endl;
			else cout << "khong tinh duoc" << endl;
		}
		if(c=='%'){
			if(b) cout << a%b << endl;
			else cout << "khong tinh duoc" << endl;
		}
		if(c=='*') cout << a*b << endl;
	}
}
