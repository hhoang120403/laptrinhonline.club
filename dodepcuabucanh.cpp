#include<stdio.h>

int main(){
	long long n,x,y,res=0,a=0,b=0;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld%lld",&x,&y);
		a += x;
		b += y;
		res += n*x*x+n*y*y;
	}
	res-=a*a+b*b;
	printf("%lld",res);
	return 0;
}
