#include<bits/stdc++.h>

using namespace std;
/*
	QHD dung mang 1 chieu: 
	void solve(){
 	int n; cin >> n;
	vector<pair<float, float>> v;
	vector<int> d(n,1);
	for(int i = 0; i < n; i++){
  		float x, y; 
		cin >> x >> y;
  		v.push_back({x,y});
 	}
	for(int i=0;i<n;i++)
		for(int j=0;j<i;j++)
			if(v[i].first > v[j].first && v[i].second < v[j].second) d[i] = max(d[i], d[j] + 1);
	cout << *max_element(d.begin(),d.end()) << endl ;
}

int main(){
 	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    for(int i = 1; i <= t; i++){
     	solve();
 	}  
}
*/

// QHD dung mang 2 chieu:
#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t,n;
    cin >> t;
    while(t--){
    	cin >> n;
    	vector< pair<float,float> > v;
    	for(int i=0;i<n;i++){
    		float a,b;
    		cin >> a >> b;
    		v.push_back({a,b});
		}
    	int res=1;
    	int d[n+4][n+4]={};
    	d[0][0] = 1;
    	for(int i=0;i<n-1;i++){
    		for(int j=i+1;j<n;j++){
    			if(v[i].second>v[j].second && v[i].first<v[j].first){
    				if(i-1>=0) d[i][j] = max(d[i-1][i]+1, d[i-1][j]);
    				else d[i][j] = 2;
				} 
    			else{
    				if(i-1>=0) d[i][j] = d[i-1][j];
    				else d[i][j] = 1;
				}
    			res = max(res,d[i][j]);
			}
		}
		cout << res << endl;
	}
}
