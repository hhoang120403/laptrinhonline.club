#include<bits/stdc++.h>

using namespace std;

long long pow(long long a, long long b){
    if(b==0){
        return 1;
    }
    int res = pow(a%1000,b/2);
    if(b%2==0){
        return res*res%1000;
    }
    else{
        return a*res*res%1000;
    }
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	string s1,s2;
	cin >> s1 >> s2;
	long long a=0,b=0;
	a += s1[s1.size()-1]-'0';
	if(s1.size()>=2) a += (s1[s1.size()-2]-'0')*10;
	if(s1.size()>=3) a += (s1[s1.size()-3]-'0')*100;
	for(int i=0;i<s2.size();i++){
		b = (b*10 + s2[i]-'0') % 1000;
	}
	long long res = pow(a,b);
	if(res<100) cout << '0';
	if(res<10) cout << '0';
	cout << res;
}
