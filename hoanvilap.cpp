#include<bits/stdc++.h>

using namespace std;

map<char,int> m;
string s,tmp;

void Try(int i){
	if(i==s.size()){
        cout << tmp << endl;
	}
    for(char j='A';j<='Z';j++){
        if(m[j]>0){
        	m[j]--;
        	tmp[i] = j;
			Try(i+1);
        	m[j]++; //backtrack
		}
    }
}

int main(){
    cin >> s;
    for(int i=0;i<s.size();i++){
    	m[s[i]]++;
	}
	tmp.resize(s.size());
	Try(0);
    return 0;
}
