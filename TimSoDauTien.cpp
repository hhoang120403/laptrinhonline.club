#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll a, b;
    cin >> a >> b;
    // Cong thuc tim so dau tien cua luy thua
    double num = double(b)*log10(a*1.0);
    num = num - (ll)num;
    double first = pow(10.0, num);
    cout << (int)first << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
