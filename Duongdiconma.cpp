#include<bits/stdc++.h>
using namespace std;


// Cach 1: Dung ma tran
typedef struct{
	int x,y;
}ToaDo;

int main(){
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	ToaDo d[101];
	int n;
	cin >> n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			int num; cin >> num;
			d[num].x = i;
			d[num].y = j;
		}
	}
	for(int i=1;i<=n*n;i++){
		cout << "(" << d[i].x << "," << d[i].y << ")" << " ";
	}
}

// Cach 2: Dung BFS

//int dx[9] = {-2,-2,-1,-1,1,1,2,2};
//int dy[9] = {-1,1,-2,2,-2,2,-1,1};
//int a[101][101];
//int n;
//
//void bfs(int i,int j){
//	queue<pair<int,int>> q;
//    q.push({i,j});
//    while(!q.empty()){
//    	int x = q.front().first;
//    	int y = q.front().second;
//    	q.pop();
//    	if(a[x][y]==n*n){
//    		cout << "(" << x << "," << y << ")";
//    		return;
//		}
//		else{
//			cout << "(" << x << "," << y << ")" << " ";
//		}
//    	for(int i=0;i<8;i++){
//    		int i1 = x+dx[i];
//    		int j1 = y+dy[i];
//    		if(i1>=1 && i1<=n && j1>=1 && j1<=n && a[i1][j1] == a[x][y]+1){
//				q.push({i1,j1});
//				break;
//			}
//		}
//	} 
//}
//
//int main(){
//	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
//   	cin >> n;
//   	int first,last;
//   	for(int i=1;i<=n;i++){
//   		for(int j=1;j<=n;j++){
//   			cin >> a[i][j];
//   			if(a[i][j]==1){
//   				first = i;
//   				last = j;
//			}
//		}
//	}
//	bfs(first,last);
//	return 0;
//}

