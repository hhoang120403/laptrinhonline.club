#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    long long a[n+12];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    long long s1=0,s2=0,s3=0;
    sort(a+1,a+n+1);
    if(n%2==0){
        for(int i=1;i<=n;i++){
            s1 += abs(a[i]-a[n/2]);
        }
        cout << s1;
    }
    else{
        for(int i=1;i<=n;i++){
            s2 += abs(a[i]-a[(n+1)/2]);
            s3 += abs(a[i]-a[(n-1)/2]);
        }
        cout << ((s2>s3) ? s3 : s2);
    }
}
