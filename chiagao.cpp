#include <bits/stdc++.h>
using namespace std;

int x[10];
int hv[10];
bool used[10]={};
int res = INT_MAX,s=0;

void kc(){
	int s1=0,s2=0,s3=0;
	for(int i=1;i<=3;i++){
		s1 += x[hv[i]];
	}
	for(int i=4;i<=6;i++){
		s2 += x[hv[i]];
	}
	s3 = s - s1 - s2;
	int Max,Min;
	Max = max(s1,max(s2,s3));
	Min = min(s1,min(s2,s3));
	if(Max-Min<res) res = Max-Min;
}

void Try(int k){
	if(k>6){
		kc();
		return;
	} 
	for(int i=1;i<=9;i++){
		if(used[i]==false){
			hv[k] = i;
			used[i] = true;
			Try(k+1);
			used[i] = false;
		}
	}
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	for(int i=1;i<=9;i++){
		cin >> x[i];
		s += x[i];
	} 
	Try(1);
	cout << res;
}
