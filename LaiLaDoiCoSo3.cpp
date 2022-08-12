#include<bits/stdc++.h>
using namespace std;


string Covert(long long num){
	long long tmp=num;
	string s="";
    while(tmp>0){
    	int du = tmp%3;
    	s = char(du+'0') + s;
    	tmp /= 3;
	}
	return s;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long a,b;
    cin >> a >> b;
    string tb = Covert(b);
    string n = Covert(a);
	while(n.size()<tb.size()){
		n = "0" + n;
	}
	while(tb.size()<n.size()){
		tb = "0" + tb;
	}
	long long num=0;
	for(int i=0;i<n.size();i++){
		if(tb[i]=='0' && n[i]=='1') num = num*10 + 2;
		else if(tb[i]=='0' && n[i]=='2') num = num*10 + 1;
		else if(tb[i]=='1' && n[i]=='2') num = num*10 + 2;
		else num = num*10 +  int((tb[i]-'0') - (n[i]-'0'));
	}
	long long res=0;
	int len=0;
	while(num>0){
		int last = num%10;
		res += last*pow(3,len);
		len++;
		num /= 10;
	}
	cout << res;
}
