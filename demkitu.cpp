#include<bits/stdc++.h>

using namespace std;

int d[123][100000];

void init(string s){
   	memset(d,0,sizeof(d));
	for(int i=97;i<=122;i++){
		for(int j=0;j<s.size();j++){
			if(i==(int)s[j]){
				d[i][j] = d[i][j-1] + 1;
			}
			else d[i][j] = d[i][j-1];
		}
	}
}

int main(){
   	string s;
   	cin >> s;
   	int t;
   	cin >> t;
   	init(s);
   	int a,b;
   	char k;
   	while(t--){
   		cin >> a >> b;
   		cin >> k;
   		cout << d[(int)k][b-1]-d[(int)k][a-2] << " ";
	}
}
