#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
    cin >> n;
    long a[n+50],res = 0;
    map<int,long> mp;
    for(int i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    res = mp[4] + mp[3] + mp[2]/2;
    mp[1] -= mp[3];
    if(mp[2]%2>0){
        res += 1;
        mp[1] -= 2;
    }
    if(mp[1]>0){
        res += (mp[1]+3)/4;
    }
    cout << res;
}
