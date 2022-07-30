#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
	int n,m;
    cin >> n;
    ll a[n+1];
    for(int i=1;i<=n;i++) cin >> a[i];
    cin >> m;
    ll b[m+1];
    for(int i=1;i<=m;i++) cin >> b[i];
    int i=1,j=1;
    while(i<=n && j<=m){
        while(a[i]<b[j] && i<=n){
            cout << a[i] << " ";
            i++;
        }
        while(b[j]<= a[i] && j<=m){
            cout << b[j] << " ";
            j++;
        }
    }
    while(i<=n){
        cout << a[i] << " ";
        i++;
    }
    while(j<=m){
        cout << b[j] << " ";
        j++;
    }
}
