#include<stdio.h> 

int Min(int a, int b){
	return a>b?b:a;
}

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[1001];
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    int d[100001];
    d[0] = 0;
    for(int i=1;i<=m;i++){
        d[i] = 1e5+4;
        for(int j=1;j<=n;j++){
            if(i>=a[j]){
                d[i] = Min(d[i-a[j]]+1,d[i]);
            }
        }
    }
    if(d[m]==1e5+4) printf("ATM khong the tra tien");
    else printf("%d",d[m]);
}
