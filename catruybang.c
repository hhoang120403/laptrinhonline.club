#include<stdio.h>
#include<limits.h>

//Quy Hoach Dong: Bai toan tien xu

int min_coin(int v[],int n, int f[]){
    f[0] = 0;
    for(int i=1;i<=n;i++){
        f[i] = INT_MIN;
        for(int j=0;j<3;j++){
            if(v[j]<=i && f[i-v[j]]+1>f[i]){
                f[i] = f[i-v[j]]+1;
            }
        }
    }
    return f[n];
}

int main(){
   	int n;
   	scanf("%d",&n);
    int v[3];
    for(int i=0;i<3;i++) scanf("%d",&v[i]);
    int f[n];
    printf("%d",min_coin(v,n,f));
}
