#include<bits/stdc++.h>

using namespace std;

int Sum(int res){
	int ans = 0;
	while(res>0){
		ans += res%10;
		res /=10;
	}
	return ans;
}

int main(){
    string s;
    cin >> s;
    int res = 0;
    for(int i=0;i<s.size();i++){
    	res = res + (s[i]-'0');
	}
	while(res>=10){
		res = Sum(res);
	}
	cout << res;
}
