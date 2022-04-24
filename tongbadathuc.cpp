#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main() {
	int k=0;
	double res[100001];
	int max = -1;
	while(k<3){
		int n;
		cin >> n;
		if(n>max) max = n;
		double a[n+2];		
		for(int i=0;i<=n;i++){
			cin >> a[i];
			res[i] += a[i];
		} 
		k++;
	}
	int vt,cnt=0;
	for(int i=max;i>=0;i--){
		if(res[i]==0.0){
			cnt++;
			vt = i;
		}
		else break;
	}
	if(cnt==max+1) cout << "0.00";
	else{
		for(int i=0;i<=max-cnt;i++){
			cout << setprecision(2) << fixed << res[i] << " ";
		}
	}	
}
