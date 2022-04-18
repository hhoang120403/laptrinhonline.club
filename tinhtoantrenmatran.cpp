#include<bits/stdc++.h>
#include<queue>

using namespace std;

long long n,m,a[102][102];

void init(){
	for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		cin >> a[i][j];
		}
	}
}

void solve1(){
	long long s1=0;
	for(int i=1;i<=n;i++){
		s1 = 0;
    	for(int j=1;j<=m;j++){
    		s1 += a[i][j];
		}
		cout << s1 << " ";
	}
	cout << endl;
}

void solve2(){
	long long max = INT_MIN;
	for(int i=1;i<=m;i++){
		max = INT_MIN;
    	for(int j=1;j<=n;j++){
    		if(a[j][i]>max) max = a[j][i];
		}
		cout << max << " ";
	}
	cout << endl;
}

void solve3(){
	long long s2 = 0;
	long cnt = 0;
	for(int i=1;i<=n;i++){
    	for(int j=1;j<=m;j++){
    		if(i%2==0 && j%2!=0 && a[i][j]%3==0){
    			s2 += a[i][j];
    			cnt++;
			}
		}
	}
	if(cnt!=0) cout << setprecision(3) << fixed << 1.0*s2/cnt << endl;
	else cout << "khong co so thoa man" << endl;
}

int main(){
    cin >> n >> m;
	init();
	solve1();
	solve2();
	solve3();  
}
