#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long num,n=1,s=0;
    while(cin>>num){
        s += num;
        n++;
    }
    cout<<n*(n+1)/2-s;
}
