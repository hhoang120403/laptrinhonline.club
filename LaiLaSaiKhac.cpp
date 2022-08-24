#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    long long a[n+1];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    long long res=0;
    for(int i=0;i<n;i++) res += a[i]*i - a[i]*(n-i-1);
    cout << res;
}
