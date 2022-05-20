#include<stdio.h>

int d[101][10001];

int Maximum(int a, int b){
	return a>b?a:b;
}

void init(int w[], int v[], int n, int maxx){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=maxx;j++) d[i][j] = 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=maxx;j++){
			d[i][j] = d[i-1][j];
			if(j>=w[i]) d[i][j] = Maximum(d[i][j],d[i-1][j-w[i]]+v[i]);
		}
	}
}

int main(){
	int n,q,maxx=0;
	scanf("%d",&n);
	int w[n+1],v[n+1];
	for(int i=1;i<=n;i++) scanf("%d%d",&w[i],&v[i]);
	scanf("%d",&q);
	int s[q+1];
	for(int i=0;i<q;i++){
		scanf("%ld",&s[i]);
		if(s[i]>maxx) maxx = s[i];
	}
	init(w,v,n,maxx);
	for(int i=0;i<q;i++){
		printf("%d\n",d[n][s[i]]);
	}
	return 0;
}
