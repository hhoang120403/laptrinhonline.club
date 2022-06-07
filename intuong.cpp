#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int res=0,k=1;
	while(k<n){
		k *= 2;
		res++;
	}
	res++;
	printf("%d",res);
}
