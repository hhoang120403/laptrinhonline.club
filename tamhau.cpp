#include<bits/stdc++.h>

using namespace std;

int	n,dem,col[200],row[200],d1[200],d2[200];

//X[i] = j: Con hau nam o vi tri hang i cot j

void Try(int i){
    // Duyet cac kha nang ma X[i] co the nhan duoc
    for(int j=1;j<=n;j++){
        //Xet xem lieu rang co the gan X[i] = j hay khong?
        if(!col[j] && !d1[i-j+n] && !d2[i+j-1] && j!=i && j!=n-i+1){
        	col[j] = 1; // danh dau
        	d1[i-j+n] = 1;
        	d2[i+j-1] = 1;
        	if(i==n){
        		dem++;
			}
			else{
				Try(i+1);
			}
			//backtrack
			col[j] = 0; // danh dau
        	d1[i-j+n] = 0;
        	d2[i+j-1] = 0;
		}
    }
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    Try(1);
    cout << dem;
    return 0;
}
