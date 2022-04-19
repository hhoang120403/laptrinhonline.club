#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
const ll mod = 1e9+9;

// Cong thuc tinh tong tat ca cac so fb <=n: S(n) = F(n+2) - 1

// Nhan a*b, sau do luu ket qua lai cho ma tran a
void nhan(ll a[2][2], ll b[2][2]){
    ll res[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            res[i][j] = 0;
            for(int k=0;k<2;k++){
                res[i][j] += a[i][k]*b[k][j] % mod;
                res[i][j] %= mod;
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            a[i][j] = res[i][j];
        }
    }
}

//Tinh so fibonancci thu n
ull powMod(ll n){
    ll res[2][2] = {{1,0},{0,1}};
    ll a[2][2] = {{1,1},{1,0}};
    while(n){
        if(n%2==1){
            nhan(res,a);
        }
        nhan(a,a);
        n /= 2;
    }
    return res[0][1];
}
int main(){
    ll n;
    cin >> n;
    ull res = 0;
    res = powMod(n+2)%mod - 1;
	cout << res;
}
