#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n,m;
    cin >> n >> m;
    int a[n+4][m+4];
    int d[n+4][m+4];
    //d[i][j] la kich thuoc hinh vuong lon nhat trong (i,j) la diem duoi cung ben phai
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
            d[i][j] = 1;
        }
    }
    int res=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==a[i-1][j-1] && a[i][j]==a[i][j-1] && a[i][j]==a[i-1][j]){
                d[i][j] = min(d[i-1][j-1],min(d[i-1][j],d[i][j-1])) + 1;
            }
            res = max(res,d[i][j]);
        }
    }
    cout << res;
}
