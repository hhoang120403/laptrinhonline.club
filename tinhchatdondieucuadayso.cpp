#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n+12],d1=0,d2=0,d3=0;
    int c1=0,c2=0;
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n-1;i++){
    	if(a[i]==a[i+1]) d1++;
    	if(a[i]<=a[i+1]){
    		d2++;
    		if(a[i]==a[i+1]) c1=1;
		}
		if(a[i]>=a[i+1]){
			d3++;
			if(a[i]==a[i+1]) c2=1;
		}
	}
	if(d1!=n-1 && d2!=n-1 && d3!=n-1){
		cout << "Day khong don dieu";
	}
	else{
		if(d1==n-1){
			cout << "Day bang nhau";
		}
		if(d2==n-1 && d1!=n-1){
			if(c1) cout << "Day don dieu tang";
			else cout << "Day don dieu tang ngat";
		}
		if(d3==n-1 && d1!=n-1){
			if(c2) cout << "Day don dieu giam";
			else cout << "Day don dieu giam ngat";
		}
	}
}
