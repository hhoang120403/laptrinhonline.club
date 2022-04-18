#include<bits/stdc++.h>
#include<queue>

using namespace std;

int a[1000][1000];
int d[1000][1000];
int dx[4] = {-1,0,0,1};
int dy[4] = {0,-1,1,0};
pair<int,int> s,e;
int n,m;

void init(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++) cin >> a[i][j];
    }
    cin >> s.first >> s.second >> e.first >> e.second;
    memset(d,0, sizeof(d));
}

int solve(){
    queue< pair<int,int> > q;
    q.push({s.first, s.second});
    d[s.first][s.second] = 0;
    while(!q.empty()){
        pair<int,int> top = q.front();
        q.pop();
        // duyet 4 o xung quanh
        int i = top.first;
        int j = top.second;
        for(int k=0;k<4;k++){
            int i1 = i + dx[k];
            int j1 = j + dy[k];
            if(a[i1][j1]==0 && i1>=1 && i1<=n && j1>=1 && j1<=m){
            	a[i1][j1] = 1;
                if(i1==e.first && j1==e.second) return d[i][j] + 1;
                q.push({i1,j1});
                d[i1][j1] = d[i][j] +1;
            }
        }
    }
    return -1;
}

int main(){
	init();
	if(a[e.first][e.second]==0){
		cout << solve() << endl;
	}
	else cout << "-1" << endl;
}
