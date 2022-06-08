#include<stdio.h>

int c[101];

int main(){
	int a,b;
	for(int i=1;i<=3;i++){
		scanf("%d%d",&a,&b);
		for(int j=a;j<=b;j++){
			c[j] = 1;
		}
	}
	int res=0,check=0;
	if(c[0]==0 && c[1]) res += 1;
	for(int i=1;i<=100;i++){
		if(c[i]==0){
			res += 1;
			check = 1;
		}
		if(check && c[i]){
			res += 1;
			check = 0;
		}
	}
	printf("%d",res);
}
