#include<stdio.h>

int d[10001];
int a[101],b[1001];
int n,q;

int Min(int a, int b){
	return a>b?b:a;
}

int main(){
    scanf("%d%d",&n,&q);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    d[0] = 0;
    for(int i=1;i<=10000;i++) {
    	d[i] = 1e4+5;
    	for(int j=1;j<=n;j++){
    		if(i>=a[j]){
    			d[i] = Min(d[i-a[j]]+1,d[i]);
			}
		}
	}
    while(q--){
    	int x;
    	scanf("%d",&x);
    	if(d[x]==1e4+5) printf("-1\n");
    	else printf("%d\n",d[x]);
	}
}
