#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int n;
	cin >> n;
	queue<long long> q;
	q.push(1);
	q.push(2);
	q.push(5);
	while(q.front()<=999999999){
		long long k = q.front();
		q.push(k*10);
		q.push(k*10+1);
		q.push(k*10+2);
		q.push(k*10+5);
		if(k%n==0) cout << k << endl;
		q.pop();
	}
}
