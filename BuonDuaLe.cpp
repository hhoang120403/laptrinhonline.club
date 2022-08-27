#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,k,m;
    cin >> n >> k >> m;
    int x,du;
    long long res=0;
    queue<int> q;
    for(int i=1;i<=n+k-1;i++){
    	du = m;
    	if(i<=n){
    		cin >> x;
    		q.push(x);
		}
		else q.push(0);
		while(q.size()>k) q.pop();
		while(!q.empty() && du){
			if(q.front()<=du){
				res += q.front();
				du -= q.front();
				q.pop();
			}
			else{
				res += du;
				q.front() -= du;
				du = 0;
			}
		}
	}
	cout << res;
}
