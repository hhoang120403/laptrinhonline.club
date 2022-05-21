#include<stdio.h>
#include<math.h>

// Thu?t toán: phân tích thành nhi?u s? 3 nh?t có th? nhung khi mà phân tích còn th?a 1 thì ph?i thay vào dó s? cu?i là 4

long long solve(int n){
	int cnt,du;
	long long tich;
	cnt = n/3;
	du = n%3;
	if(du==1){
		cnt -= 1;
		tich = pow(3,cnt)*du*4;
	}
	else{
		if(du!=0) tich = pow(3,cnt)*du;
		else tich = pow(3,cnt);
	}
	
	return tich;
}

int main(){
	int t;
	scanf("%d",&t);
	int n;
	while(t--){
		scanf("%d",&n);
		printf("%lld\n",solve(n));
	}
}
