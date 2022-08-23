#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    string s,tmp;
    cin.ignore();
    cin >> s;
    tmp = s;
    string res,p;
    for(int i=1;i<(n+1)/2;i++){
    	res="",p="";
    	int len = (3*n-tmp.size())/2;
    	for(int j=1;j<=len;j++) p += "-";
    	res = p + tmp + p;
    	cout << res << endl;
    	tmp += s + s;
	}
	res="";
	p="";
	for(int j=1;j<=(3*n-17)/2;j++) p += "-";
	res = p + "CHUC MUNG NAM MOI" + p;
	cout << res << endl;
	for(int i=1;i<(n+1)/2;i++){
    	res="",p="";
    	tmp.resize(tmp.length()-6);
    	int len = (3*n-tmp.size())/2;
    	for(int j=1;j<=len;j++) p += "-";
    	res = p + tmp + p;
    	cout << res << endl;
	}
}
