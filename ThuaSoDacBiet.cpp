#include<bits/stdc++.h>
using namespace std;


int solve(long long n){
	int cnt=0;
	for(int i=0;i<=12;i++){
		for(int j=i-3;j<=i+1;j++){
			if(j<0) continue;
			long long s = pow(5,i) * pow(2,j);
			if(s<=n){
				cnt++;
			}
			else break;
		}
	}
	return cnt;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	cin >> t;
	for(int i=1;i<=t;i++){
        long long n;
        cin >> n;
        cout << "#Case " << i << ": " << solve(n) << endl;
    }
}
