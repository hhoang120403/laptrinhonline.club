#include<bits/stdc++.h>

using namespace std;

int main()
{
	long long n,s;
	cin >> n >> s;
	long long A[3*n+1];
	if(3*n<s) cout << "0";
	else if(n>=s) cout << (s+1)*(s+2)/2;
	else{
		long long res=0;
		for(int i=0;i<=s;i++) A[i]=i<=n?i+1:(i<=2*n?2*n-i+1:0);
		for(int i=0;i<=n;i++) res += A[s-i];
		cout << res;
	}
}
