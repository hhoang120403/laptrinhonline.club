#include<bits/stdc++.h>
using namespace std;

int Count(int tmp){
	int cnt=0;
	while(1){
		if(tmp==1){
			cnt++;
			break;
		}
		else if(tmp%2){
			tmp = 3*tmp+1;
		} 
		else{
			tmp /= 2;
		}
		cnt++;
	}
	return cnt;
}

int solve(int x, int y){
	int max=-1;
	if(x>y){
		int tmp = x;
		x = y;
		y = tmp;
	}
	for(int i=x;i<=y;i++){
		if(Count(i)>max) max = Count(i);
	}
	return max;
}

int main(){
	int a[1000], b[1000], s[1000];
    int i = 0;
    do{
        cin >> a[i] >> b[i];
        if (a[i]==0 && b[i] == 0) break;
        s[i] = solve(a[i], b[i]);
        ++i;
    } while(1);
    for(int j = 0; j < i; j++)
        cout << a[j] << " " << b[j] << " " << s[j] << endl;
}
