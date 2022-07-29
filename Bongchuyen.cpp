#include<bits/stdc++.h>

using namespace std;

int main(){
	int k;
	cin >> k;
	int p=0,p1=0,s=0,s1=0,t=0,t1=0;
	while(k--){
		cin.ignore();
		string name;
		cin >> name;
		int a,b,c,d,e,f;
		cin >> a >> b >> c >> d >> e >> f;
		p += a; p1 += d;
		s += b; s1 += e;
		t += c; t1 += f;
	}
	char c1[20],c2[20],c3[20];
	int num;
	num = round(1.0*p1*100/p*100);
	sprintf(c1, "%d", num);
	num = round(1.0*s1*100/s*100);
	sprintf(c2, "%d", num);
	num = round(1.0*t1*100/t*100);
	sprintf(c3, "%d", num);
	cout << "Service: " << c1[0] << c1[1] << "," << c1[2] << c1[3] << "%." << endl;
	cout << "Block: " << c2[0] << c2[1] << "," << c2[2] << c2[3] << "%." << endl;
	cout << "Spike: " << c3[0] << c3[1] << "," << c3[2] << c3[3] << "%." << endl;
}
