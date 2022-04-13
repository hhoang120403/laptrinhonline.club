#include<bits/stdc++.h>

using namespace std;

int n,a[100],ok,cnt;

void init(){
    for(int i=1;i<=n;i++){
        a[i] = i;
    }
}

void sinh(){
    int i = n-1;
    while(i>=1 && a[i]>a[i+1]){
        i--;
    }
    if(i==0){
        ok = 0;
    }
    else{
        int j = n;
        while(a[i]>a[j]) j--;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}

bool check(){
	for(int i=1;i<n;i++){
		if((a[i]+a[i+1])%4==0) return false;
	}
	return true;
}

int main(){
    scanf("%d",&n);
    ok = 1;
    init();
    cnt = 0;
    while(ok){
        if(check()){
        	cnt++;
        	for(int i=1;i<=n;i++){
        		printf("%d ",a[i]);
			}
			printf("\n");
		}
        sinh();
    }
    printf("%d",cnt);
}
