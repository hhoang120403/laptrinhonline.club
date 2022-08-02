#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[201][201];
bool visited[201][201];
int res[51],cnt;

int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {-1,0,1,-1,1,-1,0,1};

void dfs(int i, int j){
    visited[i][j] = true;
   	res[cnt]++;
    for(int k=0;k<8;k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1>=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]==0 && !visited[i1][j1]){
            visited[i1][j1] = true;
            dfs(i1,j1);
        }
    }
}

void input(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cin >> a[i][j];
    }
    memset(visited,false,sizeof(visited));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]==0 && !visited[i][j]){
                visited[i][j] = true;
                cnt++;
                dfs(i,j);
            }
        }
    }
}

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    input();
    sort(res+1,res+cnt+1);
    cout << cnt << endl;
    for(int i=1;i<=cnt;i++) cout << res[i] << " ";
}
