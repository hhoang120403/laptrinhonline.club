#include<bits/stdc++.h>

using namespace std;

int main(){
    string a,b,c;
    cin >> a >> b >> c;
    int m=0,n=0,k=0,check=1,res,i=1;
    while(check){
    	if(i==1){
    		while(a[m]=='a'){
    			m++;
			}
			if(a[m]=='b') i = 2;
			else i = 3;
			m++;
			if(m>a.size()){
				check = 0;
				res=m;
				break;
			}
		}
		else if(i==2){
    		while(b[n]=='b'){
    			n++;
			}
			if(b[n]=='a') i = 1;
			else i = 3;
			n++;
			if(n>b.size()){
				check = 0;
				res=n;
				break;
			}
		}
		else{
    		while(c[k]=='c'){
    			k++;
			}
			if(c[k]=='a') i = 1;
			else i = 2;
			k++;
			if(k>c.size()){
				check = 0;
				res = k;
				break;
			}
		}
	}
	if(res==m) cout << "A";
	else if(res==n) cout << "B";
	else cout << "C";
}
