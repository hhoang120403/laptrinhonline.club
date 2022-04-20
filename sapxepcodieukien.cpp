#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a,b,c;
    for(int i=1;i<=n;i++){
    	int x;
    	cin >> x;
    	if(x%3==0) a.push_back(x);
    	if(x%3==1) b.push_back(x);
    	if(x%3==2) c.push_back(x);
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	sort(c.begin(),c.end());
	for(auto it1:a) cout << it1 << " ";
	for(auto it2:b) cout << it2 << " ";
	for(auto it3:c) cout << it3 << " ";
}
