#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	map<int,int> m;
    cin >> n;
    int a[n+1],length=0,pivot=0;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++){
    	if(m[a[i]]>pivot){
    		pivot = m[a[i]];
		}
		if(length<i-pivot) length = i-pivot;
		m[a[i]] = i;
	}
    cout << length;
}
