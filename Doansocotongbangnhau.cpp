#include<bits/stdc++.h>

using namespace std;

void solve(int index){
	int n,m;
	cin >> n >> m;
	if(m==0) return;
	int a[m+1];
	int sum1=0,sum2=0,res;
	for(int i=1;i<=m;i++){
		cin >> a[i];
		sum1 += a[i]; 
	}
	res = sum1;
	int k;
	for(int i=2;i<=m;i++){
		k = 0;
		if(sum1%i==0){
			for(int j=1;j<=m;j++){
				sum2 += a[j];
				if(sum2==sum1/i){
					k++;
					sum2=0;
				}
				if(k==i){
					res =  min(res,sum1/i);
				}
			}
		}	
	}
	cout << index << " " << res << endl;
}

int main(){
	ios::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	for(int i=1;i<=t;i++){
		solve(i);
	}
}
