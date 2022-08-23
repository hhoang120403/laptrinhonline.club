#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    vector< pair<int,int> > v;
    for(int i=1;i<=n;i++){
    	int x; cin >> x;
    	v.push_back({x,i});
	}
	sort(v.begin(),v.end()+1);
	int cnt=0;
	int a[100001]={};
	for(int i=1;i<=n;i++){
		int idx = v[i].second;
		if(a[idx]==0){
			a[idx+1] = 1;
			a[idx-1] = 1;
			cnt++;
		}
	}
	cout << cnt;
}
