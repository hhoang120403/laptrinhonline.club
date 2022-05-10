#include<stdio.h>

int main(){
	int n;
    scanf("%d",&n);
    int r,b,d;
    while(n--){
    	scanf("%d%d%d",&r,&b,&d);
    	if(d==0){
    		if(r==b) printf("YES\n");
    		else printf("NO\n");
		}
		else{
			int k = r>b?r/b:b/r; // Tim so goi lon nhat
    		if(k<=d+1) printf("YES\n");
    		else printf("NO\n");
		}  	
	}
}
