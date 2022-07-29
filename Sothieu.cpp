#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n,m;
    cin >> n;
    map<int,int> m1;
    int k;
    for(int i=0;i<n;i++){
        cin >> k;
        m1[k]--;
    } 
    cin >> m;
    for(int i=0;i<m;i++){
        cin >> k;
        m1[k]++;
    } 
    for(auto x:m1){
        if(x.second>0){
        	cout << x.first << " ";
		}
    }
}
