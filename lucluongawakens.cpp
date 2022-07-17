#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int n,m;
	cin >> n >> m;
	int x[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++) cin >> x[i][j];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(x[i][j]==42){
				if(i!=0 && j!=0){
					if(x[i-1][j]==7 && x[i][j-1]==7 && x[i][j+1]==7 && x[i+1][j]==7 && x[i-1][j-1]==7 && x[i-1][j+1]==7 && x[i+1][j-1]==7 && x[i+1][j+1]==7){
						cout << i+1 << " " << j+1;
						return 0;
					}
				}
			}
		}
	}
	cout << "0 0";	
}
