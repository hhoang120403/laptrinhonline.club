#include<bits/stdc++.h>

using namespace std;

int main(){
   	int n;
   	cin >> n;
   	int number,s[4]={};
   	string species;
   	while(n--){
   		cin >> number;
   		cin.ignore();
   		cin >> species;
   		s[0] += number;
   		if(species[0]=='C') s[1] += number;
   		else if(species[0]=='R') s[2] += number;
   		else s[3] += number;
	}
	cout << "Tong so: " << s[0] << endl;
	cout << "Tong so tho: " << s[1] << endl;
	cout << "Tong so chuot: " << s[2] << endl;
	cout << "Tong so ech: " << s[3] << endl;
	cout << "Ty le phan tram cua tho: " << setprecision(2) << fixed << 1.0*s[1]*100/s[0] << "%"<< endl;
	cout << "Ty le phan tram cua chuot: " << setprecision(2) << fixed << 1.0*s[2]*100/s[0] << "%"<< endl;
	cout << "Ty le phan tram cua ech: " << setprecision(2) << fixed << 1.0*s[3]*100/s[0] << "%"<< endl;
}
