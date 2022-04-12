#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long min = INT_MAX;
    for(int i=1;i<=sqrt(n);i++){
    	if(n%i==0){
    		if(log10(n/i)+1<min) min = log10(n/i)+1;
		}
	}
	cout << min;
}
