#include<bits/stdc++.h>

using namespace std;

int main(){
	map<string,int> m;
	int n;
	cin >> n;
	string s;
	for(int i=1;i<=n;i++){
		cin.ignore();
		cin >> s;
		m[s]++;
	}
	int k;
	cin >> k;
	for(int i=1;i<=k;i++){
		cin.ignore();
		cin >> s;
		cout << m[s] << endl;
	}
}
