#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);
	double x,y,r,a,b,d;
	cin >> x >> y >> r >> a >> b;
	d=sqrt(pow(x-a,2)+pow(y-b,2));
	if(d>r){
		a=x+(a-x)*r/d;
		b=y+(b-y)*r/d;
	}
	cout << setprecision(3) << fixed << "(" << a << ", " << b << ")";
}
