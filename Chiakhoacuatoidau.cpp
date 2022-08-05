#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int q,e;
	cin >> q >> e;
	int a[1001]={};
	for(int i=1;i<=e;i++){
		int x; cin >> x;
		a[x]++;
	}
	for(int i=1;i<=q;i++){
		int x; cin >> x;
		if(!a[x]) cout << "1" << endl;
		else cout << "0" << endl;
	}
}
