#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n,m,k;
	cin >> n >> m >> k;
	int c[m+1]={},d[m+1]={};
	int a,b;
	while(n--){
		cin >> a >> b;
		c[a]++;
		d[b]++;
	}
	int res = 0,cnt=0;
	for(int i = 0;i<m;i++){
		if(c[i]){
			cnt += c[i];
		}
		if(d[i]){
			cnt -= d[i];
		}
		if(cnt>=k) res++;
	}
	cout << res;
 	return 0;
}
