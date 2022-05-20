#include<stdio.h>
#include<math.h>

double DienTich(double xA,double yA,double xB,double yB,double xC,double yC){
    return 0.5*fabs(xA*yB-xB*yA+xB*yC-xC*yB+xC*yA-xA*yC);
}

int main(){
	double x[4],y[4],s[4];
	for(int i=0;i<=3;i++) scanf("%lf%lf",&x[i],&y[i]);
	s[0] = DienTich(x[3],y[3],x[0],y[0],x[1],y[1]);
	s[1] = DienTich(x[3],y[3],x[0],y[0],x[2],y[2]);
	s[2] = DienTich(x[3],y[3],x[1],y[1],x[2],y[2]);
	s[3] = s[0] + s[1] + s[2] - DienTich(x[0],y[0],x[1],y[1],x[2],y[2]);
	if(s[3]>0) printf("M o ngoai tam giac");
	else if(s[0]==0 || s[1]==0 || s[2]==0) printf("M o tren canh tam giac");
	else printf("M o trong tam giac");
}
