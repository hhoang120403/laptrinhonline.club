#include<bits/stdc++.h>

using namespace std;

long long pow(long long a, long long b){
    if(b==0){
        return 1;
    }
    if(b%2==0){
        return pow(a*a%1000,b/2)%1000;
    }
    else{
        return a*pow(a*a%1000,b/2)%1000;
    }
}

int main(){
	long long n,m;
	scanf("%lld%lld",&n,&m);
	n%=1000;
	long long k;
	k = pow(n,m)%1000;
	printf("%0.3lld",k);
}
