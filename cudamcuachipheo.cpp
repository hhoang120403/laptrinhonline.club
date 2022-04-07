#include<bits/stdc++.h>

using namespace std;

long long c[10001];

void init(){
	c[0] = 0;
	for(int i=1;i<=10000;i++){
		c[i] = c[i-1]+i;
	}
}

int main(){
	long x;
	cin >> x;
	init();
	int cnt=0,i=1;
	while(x>0){
		x -= c[i];
		if(x<0) break;
		cnt++;
		i++;
	}
	cout << cnt;
}
