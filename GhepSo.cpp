#include<bits/stdc++.h>
using namespace std;

void Min(string a, string b){
    int i=0,j=0;
    string res="";
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res = res + a[i];
            i++;
        }
        else if(a[i]>b[j]){
            res = res + b[j];
            j++;
        }
        else{
        	res = res + a[i];
        	if(i+1<a.size() && j+1<=a.size() && a[i+1]<b[j+1]) i++;
        	else j++;
		}
    }
    while(i<a.size()){
        res = res + a[i];
        i++;
    }
    while(j<b.size()){
        res = res + b[j];
        j++;
    }
    cout << res << endl;
}

void Max(string a, string b){
    int i=0,j=0;
    string res="";
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j]){
            res = res + b[j];
            j++;
        }
        else if(a[i]>b[j]){
            res = res + a[i];
            i++;
        }
        else{
        	if(a[i+1]>b[j+1]){
        		res = res + a[i];
        		i++;
			}
			else{
				res = res + b[j];
				j++;
			}
		}

    }
    while(i<a.size()){
        res = res + a[i];
        i++;
    }
    while(j<b.size()){
        res = res + b[j];
        j++;
    }
    cout << res << endl;
}

int main(){
    string s1,s2;
    cin >> s1 >> s2;
    Min(s1,s2);
    Max(s1,s2);
}
