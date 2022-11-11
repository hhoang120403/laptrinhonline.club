#include <iostream>
using namespace std;

typedef unsigned long long ull;

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ull n;
	cin >> n;
	ull count5 = 0, temp = 5, x=5*n - 5*(n/5);
	while(true){
		count5 = 0;
		temp = 5;
		while(true){
			ull t = x / temp;
			if(t==0){
				break;
			}
			count5 += t;
			temp *= 5;
		}
		if(count5 == n){
			cout << x;
			break;
		}
		x += 5;
	}
	return 0;
}
