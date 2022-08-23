#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int a,b,c;
	char o1,o2;
	int res;
	cin >> a >> o1 >> b >> o2 >> c;
	if(o1== '+'){
		if(o2=='/') res = a + b/c;
		else if(o2=='*') res = a + b*c;
		else if(o2=='+') res = a + b + c;
		else res = a + b - c;
	}
	else if(o1== '-'){
		if(o2=='/') res = a - b/c;
		else if(o2=='*') res = a - b*c;
		else if(o2=='+') res = a - b + c;
		else res = a - b - c;
	}
	else if(o1=='*'){
		if(o2=='/') res = a * b/c;
		else if(o2=='*') res = a * b * c;
		else if(o2=='+') res = a * b + c;
		else res = a * b - c;
	}
	else{
		if(o2=='/') res = (a/b)/c;
		else if(o2=='*') res = (a/b)*c;
		else if(o2=='+') res = a/b + c;
		else res = a/b - c;
	}
	cout << res;
}
