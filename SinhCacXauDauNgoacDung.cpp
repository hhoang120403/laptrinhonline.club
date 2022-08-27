#include<bits/stdc++.h>
using namespace std;

void Try(string s, int l, int r, int n){
	if(l==n && r==n){
		cout << s << "\n";
		return;
	}
	if(l<n) Try(s+'(',l+1,r,n);
	if(r<l) Try(s+')',l,r+1,n);
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    Try("",0,0,n);
}
