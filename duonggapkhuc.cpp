#include<bits/stdc++.h>
#include<math.h>

using namespace std;

double d[100001];

double distance(double x1,double y1,double x2, double y2){
	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

void init(double x[],double y[],int n){
	for(int i=2;i<=n;i++){
		d[i] = d[i-1] + distance(x[i],y[i],x[i-1],y[i-1]);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	double x[n+1],y[n+1];
	for(int i=1;i<=n;i++){
		scanf("%lf%lf",&x[i],&y[i]);
	}
	init(x,y,n);
	int q,u,v;
	cin >> q;
	for(int i=0;i<q;i++){
		scanf("%d%d",&u,&v);
		double res = d[v] - d[u];
		printf("%.3lf\n",res);
	}
}
