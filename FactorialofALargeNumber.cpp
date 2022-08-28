#include<stdio.h>
#include<string.h>

int n;
char s[100001];

void factorial(){
	memset(s,'0',100000);
	s[0] = '1';
	int length = 1,tmp=0;
	int i,j;
	for(i=2;i<=n;i++){
		for(j=0;j<length||tmp!=0;j++){
			tmp += (s[j]-'0') * i;
			s[j] = (tmp % 10)+ '0';
			tmp /= 10;
		}
		length = j;
	}
	for(i=length-1;i>=0;i--) printf("%c",s[i]);
}



int main(){
	scanf("%d",&n);
	factorial();
}
