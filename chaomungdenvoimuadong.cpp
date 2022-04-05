#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a>b){
		if(c>=b) cout << ":)";
		if(c<b){
			if(b-c<a-b) cout << ":)";
			else cout << ":(";
		}
	}
	else if(a==b){
		if(b>c) cout << ":(";
		else cout << ":)";
	}
	else{
		if(c<=b) cout << ":(";
		if(c>b){
			if(c-b<b-a) cout << ":(";
			else cout << ":)";
		}
	}
}
