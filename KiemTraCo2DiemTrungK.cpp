#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    map<pair<int,int>,int> m;
    int x,y,check=0;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        m[{x,y}]++;
        if(m[{x,y}]>1){
            check=1;
        }   
    }
    if(check==0) cout << "NO";
    else cout << "YES";
}
