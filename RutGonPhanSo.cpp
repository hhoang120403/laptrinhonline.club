#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    int ts=1,ms=a[n],tmp;
    for(int i=n-1;i>=1;i--){
        ts = ms * a[i] + ts;
        tmp = ms;
        ms = ts / __gcd(ts,tmp);
        ts = tmp / __gcd(ts,tmp);
    }
    cout << ms << "/" << ts;
}
