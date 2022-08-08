#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    long long n;
    cin >> n;
    long long t;
    cin >> t;
    long long a[n+1];
    long long sum=0,res=0;
    unordered_map<long long,long long> m;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        sum += a[i];
        if(sum==t) res = i;
        if(m.find(sum)==m.end()) m[sum] = i;
        if(m.find(sum-t)!= m.end()){
            res = max(res,i-m[sum-t]);
        } 
    }
    for(auto it:m){
        cout << it.first << " " << it.second << endl;
    }
    cout << res;
}
