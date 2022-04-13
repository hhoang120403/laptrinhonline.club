#include<bits/stdc++.h>

using namespace std;

int n,a[100],ok;

void init(){
    for(int i=1;i<=n;i++){
        a[i] = 0;
    }
}

void next(){
    int i = n;
    while(i>=1 && a[i]==1){
    	a[i] = 0;
        i--;
    }
    if(i==0) ok = 0;
    else a[i] = 1;
}

int main(){
    cin >> n;
    int w[n+12];
    ok = 1;
    init();
    for(int i=1;i<=n;i++) cin >> w[i];
    long long res=1e12;
    while(ok){
    	long long s1=0,s2=0;
    	for(int i=1;i<=n;i++){
    		if(a[i]==0) s1 += w[i];
    		else s2 += w[i];
		}
		res = min(res,abs(s1-s2));
		next();
	}
	cout << res;
}
