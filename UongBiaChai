#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m,k;
    cin >> n >> m >> k;
    int sochai = n/m;
    int sonap = sochai;
    while(sonap>=k){
        sochai += sonap/k;
        sonap = sonap/k + sonap%k;
    }
    cout << sochai << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
