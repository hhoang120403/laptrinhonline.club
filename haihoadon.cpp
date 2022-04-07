#include<bits/stdc++.h>

using namespace std;

int solve(int n,int m){
	int mnb = m-n,cnt=0;
	int a[6] = {100,50,20,10,5,2};
    if(mnb>=200) return 0;
    if(mnb>=100){
    	mnb -= 100;
    	cnt++;
	}
    for(int i=0;i<5;i++){
    	if(mnb<a[i] && mnb>=a[i+1]){
    		mnb -= a[i+1];
    		cnt++;
    		if(cnt>2) return 0;
		}
	}
	return cnt == 2;
}

int main(){
    int n, m;
    do{
        cin >> n >> m;
        if(n!=0 && m!=0){
        	if(solve(n,m)) cout << "possible" << endl;
        	else cout << "impossible" << endl; 
		}             
    }while(n!=0 && m!=0);
}
