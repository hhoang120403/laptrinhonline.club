#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    unsigned long long int t,a,b,c,res;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin >> a;
        b = a+1;
        c = a+2;
        if(a%2==0) a /= 2;
        else b /= 2;
        if(a%3==0) a /= 3;
        else if(b%3==0) b /= 3;
        else c /= 3;
        a = ((((a % mod) * (b % mod)) % mod) * (c % mod)) % mod; 
        cout << a << endl;
    }
}
