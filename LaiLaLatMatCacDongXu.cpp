#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    long long n;
    while(t--){
    	cin >> n;
    	long long tmp = sqrt(n);
    	cout << n-tmp << endl;
	}
}
