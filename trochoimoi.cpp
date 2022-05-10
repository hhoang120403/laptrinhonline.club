#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, tong = 0, res = -1, so0 = 0, so1 = 0, dem0[101] = {}, dem1[101] = {}, arr[101];
	cin >> n;
	for (int i=1; i<=n; i++)	{
		scanf("%d", &arr[i]);
		if (arr[i] == 0)
			so0++;
		else
			so1++;
		dem0[i] = so0;
		dem1[i] = so1;
		tong += arr[i];
	}
	// xu ly, tim ra doan thich hop, i la dau doan va j la cuoi doan
	for (int i=1; i<=n; i++){
		for(int j=i; j<=n; j++){
			int dem0CuaDoan = dem0[j] - dem0[i-1];
			int dem1CuaDoan = dem1[j] - dem1[i-1];
			if(tong+dem0CuaDoan-dem1CuaDoan > res){
				res = tong+dem0CuaDoan-dem1CuaDoan;
			}				
		}	
	}
	cout << res;
}
