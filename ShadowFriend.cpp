#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int kc(ll x1,ll y1, ll x2, ll y2){
	return abs(x1-x2)+abs(y1-y2);
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n,m;
	cin >> n >> m;
	ll a[n+1],b[n+1],d[n+1],idx[n+1]; 
	memset(d,1e8+1,sizeof(d));
	for(int i=0;i<n;i++) cin >> a[i] >> b[i];
	for(int i=1;i<=m;i++){
		ll x,y;
		cin >> x >> y;
		for(int j=0;j<n;j++){
			if(d[j]>kc(a[j],b[j],x,y)){
				d[j] = kc(a[j],b[j],x,y);
				idx[j] = i;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout << idx[i] << endl;
	}
}
