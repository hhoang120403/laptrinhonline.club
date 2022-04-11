#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    for(int i=0;i<n;i++){
    	if(s[i]=='B'){
    		for(int j=i-1;j>=0;j--){
    			if(s[j]!='B'){
    				s[j] = 'B';
    				break;
				}
			}
		}
	}
	for(int i=0;i<n;i++){
		if(s[i]!='B'){
			cout << s[i];
		}
	}
}
