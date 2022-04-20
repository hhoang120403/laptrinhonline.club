#include<bits/stdc++.h>

using namespace std;

#define endl '\n'

void thap(int n,char a, char c, char b,int &idx){
	if(n==1){
		idx++;
		cout << "Buoc" << idx << " Chuyen dia " << n << " tu " << a << " sang " << b << endl;
	}
	else{
		thap(n-1,a,b,c,idx);
		idx++;
		cout << "Buoc" << idx << " Chuyen dia " << n << " tu " << a << " sang " << b << endl;
		thap(n-1,c,a,b,idx);
	}
}

int main(){
    int n;
    cin >> n;
    int idx = 0;
    thap(n,'A','C','B',idx);
}
