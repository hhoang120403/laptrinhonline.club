#include<stdio.h>
#include<math.h>

// Su dung QHD: mang 2 chieu

int Maximum(int a, int b){
	return a>b?a:b;
}

int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n+1];
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	int d[n+1][m+1];
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++) d[i][j] = 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
      //Khong lua chon do vat thu i vao trong tui
			d[i][j] = d[i-1][j];
      //Co the dua do vat thu i vao trong tui
			if(a[i]<=j){
				d[i][j] = Maximum(d[i][j],d[i-1][j-a[i]]+a[i]);
			}
		}
	}
	printf("%d",d[n][m]);
}
