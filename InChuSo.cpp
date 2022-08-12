#include<bits/stdc++.h>
using namespace std;

string s[12] = {"0","mot","hai","ba","bon","lam","sau","bay","tam","chin"};

void solve(int x, int len){
	string res = " ";
	int cnt = 1;
	if(len==2 && x%10==0){
		if(x==10){
			cout << "muoi" << endl;
		}
		else if(x==50){
			cout << "nam muoi" << endl;
		}
		else cout << s[x/10] << " muoi" << endl;
		return;
	}
	if(x==100 || x==200 || x==300 || x==400 || x==500 || x==600 || x==700 || x==800 || x==900){
		if(x==500) cout << "nam tram" << endl;
		else cout << s[x/100] << " tram" << endl;
		return;
	}
	if(len==4){
		cout << "mot nghin" << endl;
		return;
	}
	int check = 0;
	while(x>0){
		if(cnt==1){
			if(x%10==0){
				res = "muoi" + res;
				check=1;
			} 
			else res = s[x%10] + res;
		}
		if(cnt==2){
			if(x%10==0){
				if(res[0]=='l') res[0] = 'n';
				res = "linh " + res;
			} 
			else{
				if(!check) res = "muoi " + res;
				if(x%10!=1){
					res = " " + res;
					res = s[x%10] + res;
					if(x%10==5) res[0] = 'n';	
				}
			}
		}
		if(cnt==3){
			res = " " + res;
			res = " tram" + res;
			res = s[x%10] + res;
			if(x%10==5) res[0] = 'n';
		}
		x /= 10;
		cnt++;
	}
	cout << res << endl;
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	int a,b;
	cin >> a >> b;
	for(int i=a;i<=b;i++){
		int len = log10(i) + 1;
		if(len==1){
			if(i==5) cout << "nam" << endl;
			else cout << s[i] << endl;
		}
		else{
			solve(i,len);
		}
	}
}
