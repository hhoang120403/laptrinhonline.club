#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s,f;
    getline(cin,s);
    int n;
    cin >> n;
    map<string,bool> m;
    while(n--){
    	cin >> f;
    	m[f] = true;
	}
	stringstream ss(s);
	while(ss>>f){
		if(m[f]){
			for(int i=0;i<f.size();i++) cout << "*";
			cout << " ";
		}
		else{
			cout << f << " ";
		}
	}
}
