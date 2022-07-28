#include<stdio.h>

typedef long long ll;
const ll MOD = 1e9+7;

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    ll a[1001],d[1001]={};
    d[0] = 1;
    for(int i=0;i<n;i++) scanf("%lld",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=m;j>=a[i];j--){
            d[j] += d[j-a[i]]%MOD;
        }
    }
    if(m==0) printf("%lld",(d[m]-1)%MOD);
    else printf("%lld",d[m]%MOD);
}
