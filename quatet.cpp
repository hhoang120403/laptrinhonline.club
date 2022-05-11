#include<bits/stdc++.h>

using namespace std;

void Input(int a[], int m){
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
}

void Sort(int a[], int m){
    int tmp;
    for(int i=0;i<m-1;i++){
        for(int j=i+1;j<m;j++){
            if(a[i]>a[j]){
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}

int Between(int a[], int n, int m){
    int min = a[n-1] - a[0];
    for(int i=n;i<m;i++){
        if(a[i]-a[i-n+1]<min) min = a[i]-a[i-n+1];
    }
    return min;
}

int main(){
    int n,m;
    cin >> n >> m;
    int a[100];
    Input(a,m);
    Sort(a,m);
    cout << Between(a,n,m);
}
