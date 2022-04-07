#include<bits/stdc++.h>

using namespace std;

long long c[1001][1001];

void init(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                c[i][j] = 1;
            }
            else{
                c[i][j] = c[i-1][j] + c[i-1][j-1];
            }
        }
    }
}

int main(){
	int n;
	cin >> n;
	init();
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	
}
