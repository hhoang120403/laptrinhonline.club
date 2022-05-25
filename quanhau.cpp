#include<bits/stdc++.h>

using namespace std;

int	n,dem,cot[100],d1[100],d2[100];

//X[i] = j: Con hau nam o vi tri hang i cot j

void Try(int i){
    // Duyet cac kha nang ma X[i] co the nhan duoc
    for(int j=1;j<=n;j++){
        //Xet xem lieu rang co the gan X[i] = j hay khong?
        if(!cot[j] && !d1[i-j+n] && !d2[i+j-1]){
        	cot[j] = 1; // danh dau
        	d1[i-j+n] = 1;
        	d2[i+j-1] = 1;
        	if(i==n){
        		dem++;
			}
			else{
				Try(i+1);
			}
			//backtrack
			cot[j] = 0; // danh dau
        	d1[i-j+n] = 0;
        	d2[i+j-1] = 0;
		}
    }
}

int main(){
    cin >> n;
    Try(1);
    cout << dem;
    return 0;
}
