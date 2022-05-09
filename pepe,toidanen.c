#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int h,p,o;
	while(n--){
		scanf("%d%d%d",&h,&p,&o);
		if(o) printf("%02d:%02d - Canh cua mo ra!\n",h,p);
		else printf("%02d:%02d - Canh cua dong lai!\n",h,p);
	}
}
