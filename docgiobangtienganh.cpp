#include<stdio.h>

char num[][20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen",
"fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty-one","twenty-two","twenty-three"};
 
void convert(int h,int m){
	if(m==0){
		if(h==0) printf("midnight"); 
		else printf("%s o'clock",num[h]);
	}
	else if(m==15) printf("quater past %s",num[h]);
	else if(m==45) printf("quater to %s",num[h+1]);
	else if(m==30) printf("half past %s",num[h]);
	else if(m<=20) printf("%s past %s",num[m],num[h]);
	else if(m>=40) printf("%s to %s",num[60-m],num[h+1]);
	else if(m<30) printf("twenty-%s past %s",num[m%10],num[h]);
	else printf("twenty-%s to %s",num[(60-m)%10],num[h+1]);
}
int main(){
	int t;
	scanf("%d",&t);
	int h,m;
	char c[4];
	while(t--){
		scanf("%d:%d %s",&h,&m,c);
		if(c[0]=='P'){
			if(h==12) h=0;
			h+=12;		
		}	
		convert(h,m);
		printf("\n");
	}
}
