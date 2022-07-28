#include<bits/stdc++.h>

using namespace std;
int MOD = 1e9+7;

int main(){
    int n,m,r;
    cin >> n >> m >> r;
    int a[1001],d[1001]={};
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++){
        int tmp[1001] = {};
        for(int j=0;j<m;j++) tmp[j*a[i]%m] += d[j] % MOD;
        tmp[a[i]%m]++;
        for(int j=0;j<m;j++) d[j] = (d[j]+tmp[j])%MOD;
    }
    cout << d[r]%MOD;
}
