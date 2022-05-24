// C++ program to demonstrate min heap
//https://www.geeksforgeeks.org/priority-queue-in-cpp-stl/	

#include<bits/stdc++.h>

using namespace std;

int main(){
    priority_queue <int, vector<int>, greater<int> > q; //sap xep tang dan
    int n, k,x;
    cin >> n >> k;
    for (int i=0; i<n; i++){
        cin >> x;
        q.push(x);
    }
    long long res=0,s=0;
    while(q.size()>k){
    	for(int i=1;i<=k;i++){
    		s += q.top();
    		q.pop();	
		}
		res += s;
		q.push(s);
		s = 0;
	}
	while(q.size()){
		res += q.top();
		q.pop();
	}
	cout << res;
}
