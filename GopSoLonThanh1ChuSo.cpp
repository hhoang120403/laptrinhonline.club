#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,m;
    do{
    	cin >> n >> m;
    	if(n==0 && m==0) break;
    	int a = n%9==0?9:n%9;
    	int b = m%9==0?9:m%9;
    	if(a<b) cout << "2" << endl;
    	else if(a>b) cout << "1" << endl;
    	else cout << "0" << endl;
	}while(n!=0 && m!=0);
    
}
