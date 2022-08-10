#include<bits/stdc++.h>
using namespace std;

bool check(int x, int num){
	int tmp=x;
	while(tmp>0){
		x += tmp%10;
		tmp /= 10;
	}
	if(x==num) return true;
	return false;
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int num;
	cin >> num;
	int size = log10(num)+1;
	int idx = num - 9*size;
	int ok=0;
	for(int i=idx;i<num;i++){
		if(check(i,num)){
			cout << i << " ";
			ok=1;
		}
	}
	if(!ok) cout << "-1";
}
