#include<stdio.h>

int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int a[51];
	long long d[251]={};
    d[0] = 1;
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=a[i];j<=m;j++){
            d[j] += d[j-a[i]];
        }
    }
    printf("%lld",d[m]);
}
