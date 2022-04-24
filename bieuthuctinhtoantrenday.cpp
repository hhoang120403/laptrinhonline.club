#include<bits/stdc++.h>

using namespace std;

#define endl '\n'
typedef long long ll;

ll sum1(int a[], int n){
	ll res=0;
	for(int i=0;i<n;i++) res += a[i]*a[i];
	return res;
}

ll sum2(int a[], int n){
	ll res=0;
	for(int i=0;i<n;i++) res += a[i]*a[n-i-1];
	return res;
}

ll sum3(int a[], int n){
	ll res=0;
	for(int i=0;i<n-1;i++) res += a[i]*a[i+1];
	return res;
}

int main(){
    int n;
    cin >> n;
    int a[n+1];
    for(int i=0;i<n;i++) cin >> a[i];
	cout << sum1(a,n) << endl << sum2(a,n) << endl << sum3(a,n);	
}
