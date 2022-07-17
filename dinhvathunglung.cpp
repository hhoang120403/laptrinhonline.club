#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) cin >> a[i];
	int c1=0,c2=0;
	for(int i=0;i<n-1;i++){
		if(a[i]>a[i+1]) c1++;
		else if(a[i]<a[i+1]) c2++;
	}
	if(c1+c2==n-1){
		if(n%2){
			if(c1==c2) cout << "1";
			else cout << "0";
		}
		else{
			if(abs(c1-c2)==1) cout << "1";
			else cout << "0";
		}
	}
	else cout << "0";	
}
