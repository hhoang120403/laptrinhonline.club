#include<bits/stdc++.h>
using namespace std;

void Mod11(string s){
	int s1=0,s2=0;
	for(int i=0;i<s.size();i++){
		if(i%2==0) s1 += int(s[i]-'0');
		else s2 += int(s[i]-'0');
	}
	if((s1-s2)%11==0) cout << "YES\n";
	else cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    string s;
    while(t--){
    	cin.ignore();
    	cin >> s;
    	Mod11(s);
	}
}
