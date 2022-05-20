#include<stdio.h>

int main(){
	char s[6][20] = {"\0","dangdungcntt","tienquanutc","quang123","maianh","nguyenminhduc2820"};
	int t;
	scanf("%d",&t);
	long long n,i;
	while(t--){
		scanf("%lld",&n);
		for(i=1;5*i<n;i*=2){
			n -= 5*i;
		}
		printf("%s\n",s[n/i + (n%i!=0)]);		
	}
}
