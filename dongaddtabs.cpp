#include<bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    int n,m;
    cin >> n >> m;
    string s;
    for(int i=1;i<=m;i++){
    	cin >> s;
    	if(s[0]=='f') n++;
    	else{
    		n--;
    		if(n==0) break;
		}
	}
	cout << n;
}
