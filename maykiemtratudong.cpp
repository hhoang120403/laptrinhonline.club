#include<bits/stdc++.h>

using namespace std;

int main(){
	int a[10];
	for(int i=0;i<10;i++) cin >> a[i];
	for(int i=0;i<5;i++){
		if(a[i]+a[5+i]!=1){
			cout << "N";
			return 0;
		}
	}
	cout << "Y";
}
