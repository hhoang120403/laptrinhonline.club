#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
   	string s;
   	cin >> s;
   	int res = 1;
   	int j,k;
   	for(int i=0;i<s.size();){
   		j = i, k = i;
   		while(k<s.size() && s[k]==s[k+1]){
   			k++;
		}
		i = k+1;
		while(k<s.size() && s[k+1]==s[j-1]){
			j--;
			k++;
		}
		res = max(res,k-j+1);
	}
	cout << res;
}
