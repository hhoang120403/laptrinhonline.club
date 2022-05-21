#include<stdio.h>

int main(){
	char a[13],b[13],c[13];
	scanf("%s\n%s\n%s", a, b, c);
	if(a[0]=='v'){
		if(b[0]=='a'){
			if(c[0]=='c') printf("aguia");
			else printf("pomba");
		}
		else{
			if(c[0]=='o') printf("homem");
			else printf("vaca");
		}
	}
	else{
		if(b[0]=='i'){
			if(c[2]=='m') printf("pulga");
			else printf("lagarta");
		}
		else{
			if(c[0]=='h') printf("sanguessuga");
			else printf("minhoca");
		}
	}
	return 0;
}
