#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	int n;
	cin >> n;
	int a[n+1],ok=0;
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<n-2;i++){
		if(a[i+1]-a[i]==a[i+2]-a[i+1]){
			ok = 1;
		}
		else{
			ok = 0;
			break;
		}
	}
	if(!ok) cout << "Day khong la day cap so cong";
	else{
		cout << "Day la day cap so cong voi cong sai " << a[1]-a[0];
	}
}
