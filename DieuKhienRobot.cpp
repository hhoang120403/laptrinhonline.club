#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    string s;
    int x=1,y=0,k=1;
    for(int i=1;i<=n;i++){
    	cin >> s;
    	if(k==1){
    		if(s=="trai"){
    			y += 1;
    			k = 2;
			}
			else if(s=="phai"){
				y -= 1;
				k = 3;
			}
			else{
				x += 1;
			}
		}
		else if(k==2){
			if(s=="trai"){
				x -= 1;
				k = 4;
			}
			else if(s=="phai"){
				x += 1;
				k = 1;
			}
			else{
				y += 1;
			}
		}
		else if(k==3){
			if(s=="phai"){
				x -= 1;
				k = 4;
			}
			else if(s=="trai"){
				x += 1;
				k = 1;
			}
			else{
				y -= 1;
			}
		}
		else{
			if(s=="trai"){
				y -= 1;
				k = 3;
			}
			else if(s=="phai"){
				y += 1;
				k = 2;
			}
			else{
				x -= 1;
			}
		}
	}
	cout << x << " " << y;
}
