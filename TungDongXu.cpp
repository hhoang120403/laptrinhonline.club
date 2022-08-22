#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s;
    cin >> s;
    int a[8]={};
    for(int i=0;i<s.size()-2;i++){
    	if(s[i]=='S' && s[i+1]=='S' && s[i+2]=='S') a[0]++;
    	if(s[i]=='S' && s[i+1]=='S' && s[i+2]=='N') a[1]++;
    	if(s[i]=='S' && s[i+1]=='N' && s[i+2]=='S') a[2]++;
    	if(s[i]=='S' && s[i+1]=='N' && s[i+2]=='N') a[3]++;
    	if(s[i]=='N' && s[i+1]=='S' && s[i+2]=='S') a[4]++;
    	if(s[i]=='N' && s[i+1]=='S' && s[i+2]=='N') a[5]++;
    	if(s[i]=='N' && s[i+1]=='N' && s[i+2]=='S') a[6]++;
    	if(s[i]=='N' && s[i+1]=='N' && s[i+2]=='N') a[7]++;
	}
	for(int i=0;i<8;i++) cout << a[i] << " ";
}
