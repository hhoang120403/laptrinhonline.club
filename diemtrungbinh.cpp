#include<bits/stdc++.h>

using namespace std;

#define endl '\n'

int main(){
    double n1,n2,n3,n4;
    cin >> n1 >> n2 >> n3 >> n4;
    double avg1,avg2;
    avg1 = (n1*2+n2*3+n3*4+n4)/10;
    avg1 = round(avg1*10)/10;
    if(avg1>=5 && avg1<=6.9){
    	double n5;
    	cin >> n5;
    	cout << "Media: " << setprecision(1) << fixed << avg1 << endl;
    	cout << "Aluno em exame." << endl;
    	cout << "Nota do exame: " << setprecision(1) << fixed << n5 << endl;
    	avg2 = (avg1+n5)/2;
    	avg2 = round(avg2*10)/10;
    	if(avg2>=5.0) cout << "Aluno aprovado." << endl;
    	else cout << "Aluno reprovado." << endl;
    	cout << "Media final: " << setprecision(1) << fixed << avg2;
	}
	else if(avg1>=7.0){
		cout << "Media: " << setprecision(1) << fixed << avg1 << endl;
		cout << "Aluno aprovado.";
	}
	else{
		cout << "Media: " << setprecision(1) << fixed << avg1 << endl;
		cout << "Aluno reprovado.";
	}
}
