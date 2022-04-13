#include<bits/stdc++.h>

using namespace std;

int main(){
    int a,b,x,y;
    cin >> a >> b;
    y = (2*a*b)/(a-b);
    x = y/a + 1;
    if(x<0 || y <0 || x+1-(float)y/b!=0 || x-(float)y/a-1!=0){
    	cout << "HUY HON";
	}
	else cout << x << " " << y;
}
