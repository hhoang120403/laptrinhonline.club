#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,sum=0;
	cin >> n;
	int a[n+1];
	for(int i=1; i<=n; i++)
	scanf("%i", &a[i]);
	int max=a[n];
	for(int i=n-1; i>=1; i--)	{
		if(a[i]>max)
		max=a[i];
		else sum+=max-a[i];
	}
	cout << sum;
}
