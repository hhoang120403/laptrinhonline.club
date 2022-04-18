#include<bits/stdc++.h>
#include<queue>

using namespace std;
long long n;
int a[2] = {6,8};

long long solve(){
	queue<long long> q;
	q.push(0);
	while (q.size()){
		long long x = q.front();
		q.pop();
		if (x % n == 0 && x)
			return x;
		for (int i = 0; i < 2; i++)
			if (x * 10 + a[i] <= 1e18)
				q.push(x * 10 + a[i]);
	}
	if(q.size() == 0)
		return 0;
}

int main(){
	cin >> n;
	if(n%5==0){
	    cout << "0";
	    return 0;
	}
	cout << solve();
}
