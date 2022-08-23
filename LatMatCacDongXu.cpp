#include<bits/stdc++.h>
using namespace std;

int t,n;
int a[1001];

bool solve(int x){
	int cnt=0;
	for(int i=2;i<=sqrt(x);i++){
		if(x%i==0) cnt++;
		if(i!=x/i && x%(x/i)==0) cnt++;
	}
	if(cnt%2==0) return true;
	return false;
}

void init(){
	a[1] = 0;
	for(int i=2;i<=1000;i++){
		if(solve(i)==true) {
			a[i] = a[i-1]+1;
		}
		else a[i] = a[i-1];
	}
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> t;
    init();
    while(t--){
    	cin >> n;
    	cout << a[n] << endl;
	}
}
