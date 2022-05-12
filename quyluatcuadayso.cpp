#include<bits/stdc++.h>

using namespace std;

int f[10001];

void init(){
	f[1] = 1;
	for(int i=2;i<=10000;i++){
		f[i] = f[i-1]+(i-1);
	}
}

int main(){
   	int t;
   	cin >> t;
   	init();
   	int x;
   	while(t--){
   		cin >> x;
   		int i=1;
   		long long sum = 0;
   		while(f[i]<=x){
   			if(f[i]<=x) sum += f[i];
   			else break;
   			i++;
		}
		cout << sum << endl;
	}
}
