#include<bits/stdc++.h>

using namespace std;

bool Sort(string a, string b){
	string ab = a+b;
	string ba = b+a;
	if(ab.compare(ba)>0) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	string a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	sort(a,a+n,Sort);
	for(int i=0;i<n;i++){
		cout << a[i];
	}	
}
