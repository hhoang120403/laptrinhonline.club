#include<bits/stdc++.h>
#define endl '\n'
 
using namespace std;

unsigned long long c[1001][41];
 
unsigned long long pow(int a, int n){
    if(n == 1) {
        return a;
    } else {
        unsigned long long temp = pow(a, n/2);
        if(n % 2 == 0)
            return temp * temp;
        else
            return temp * temp * a;
    }
}
 
void init(){
	for(int i=2;i<=999;i++){
			for(int j=1;j<=39;j++){
				c[i][j] = pow(i,j);
			}
		}
}
 
int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int t;
	unsigned long long l,r;
	cin >> t;
	init();
	while(t--){
		cin >> l >> r;
		int k=1;
		for(int i=2;i<=999;i++){
			for(int j=39;j>=1;j--){
				if(c[i][j]>=l && c[i][j]<=r && j>k){
					k = j;
					break;
				} 
			}
			if(k!=1) break;
		}
		cout << k << endl;
	}
}
