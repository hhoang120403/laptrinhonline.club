#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	long long a[n+1]={-1000000000};
	for(int i=1;i<=n;i++) cin >> a[i];
	int res=0,d1=0,d2=0,check=0;
	for(int i=1;i<=n;i++){
		if(check==0){
			if(a[i]>=a[i-1]){
				d1++;
			}
			else{
				check = 1;
			}
		}
		if(check==1){
			if(a[i]<=a[i-1]){
				d2++;
			}
			else{
				check = 0;
				res = max(res,d1+d2);
				d1 = 2;
				d2 = 0;
			}
		}
	}
	res = max(res,d1+d2);
	cout << res;
}
