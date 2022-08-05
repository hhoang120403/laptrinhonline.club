#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	string s;
	while(cin >> s){
		int h = (s[0]-'0')+1;
		int m = (s[2]-'0')*10 + (s[3]-'0');
		if(h<8) cout << "Cham tre toi da: 0" << endl;
		else cout << "Cham tre toi da: " << (h-8)*60+m << endl;
	}
}
