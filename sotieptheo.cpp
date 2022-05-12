#include<bits/stdc++.h>

using namespace std;

int main(){
   	int n;
   	cin >> n;
   	int a[n+12],d[n+12][n+12]={};
   	for(int i=0;i<n;i++){
   		cin >> a[i];
   		d[0][i] = a[i];
	} 
   	for(int i=1;i<n;i++){
   		for(int j=i;j<n;j++){
   			d[i][j] = d[i-1][j] - d[i-1][j-1];
		}
	}
	d[n-1][n] = d[n-1][n-1];
	for(int i=n-2;i>=0;i--){
		d[i][n] = d[i+1][n] + d[i][n-1];
	}
	cout << d[0][n];
}
