#include<bits/stdc++.h>

using namespace std;

int main(){
    long n;
    cin >> n;
    long x[n+1],y[n+1];
    long d1=0,d2=0,d3=0;
    long res;
    for(int i=0;i<n;i++){
    	cin >> x[i] >> y[i];
    	if(x[i]<y[i]) d1++;
    	else if(x[i]>y[i]) d2++;
    	else d3++;
	} 
    res = d1*d3+d2*d3+d1*d2;
	cout << res;
}
