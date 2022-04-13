#include<bits/stdc++.h>

using namespace std;

void next(string s){
    int i = s.length()-2;
    while(i>=0 && s[i]>=s[i+1]){
        i--;
    }
    if(i==-1){
    	cout << "KHONG CO HOAN VI TIEP THEO" << endl;
	}
    else{
    	int j = s.length()-1;
    	while(s[i]>=s[j]) j--;
    	swap(s[i],s[j]);
    	reverse(s.begin()+i+1,s.end());
    	cout << s << endl;
	}    
}

int main(){
    string s;
    cin >> s;
	next(s);
}
