#include<bits/stdc++.h>
using namespace std;

int check(long long x){
	int c1=0,c2=0;
	int last;
	while(x>1){
		last = x%10; 
		if(last==4)	c1++;
		if(last==7)	c2++;
		x /= 10;
	}
	if(c1==c2) return 1;
	return 0;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	long long n;
	cin >> n;
	queue<long long> q;
	q.push(4);
	q.push(7);
	while(!q.empty()){
		long long k = q.front();
		q.pop();
		if(k>=n && check(k)){
			cout << k;
			return 0;
		}
		q.push(k*10+4);
		q.push(k*10+7);
	}
}
