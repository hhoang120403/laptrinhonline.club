#include<bits/stdc++.h>
#include<math.h>
using namespace std;

typedef long long ll;

void solve(){
    ll a,b;
    cin >> a >> b;
    int length = log10(a);
    ll num=0;
    while(length>0){
        ll last = 1ll*a/(pow(10,length));
        num = num*10 + last;
        a -= last*pow(10,length);
        if(a*num==b){
            cout << num << " " << a << endl;
            return;
        }
        length--;
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
