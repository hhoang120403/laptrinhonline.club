#include<bits/stdc++.h>

using namespace std;

int partition(long a[],int l, int r){
    int pivot = a[r];
    int i = l-1;
    for(int j=l;j<r;j++){
        if(a[j]>=pivot){
            i++;
            swap(a[i],a[j]);
        }
    }
    i++;
    swap(a[i],a[r]);
    return i;
}

void quicksort(long a[], int l, int r){
    if(l<r){
        int p = partition(a,l,r);
        quicksort(a,l,p-1);
        quicksort(a,p+1,r);
    }
}

int main(){
    long n,k;
    cin >> n >> k;
    long a[n+100];
    for(int i=0;i<n;i++){
    	cin >> a[i];
	}
	long long res=0;
	if(k>=n){
		for(int i=0;i<n;i++){
    		res += a[i];
		}
	}
	else{
		quicksort(a,0,n-1);
		for(int i=0;i<k;i++){
    		res += a[i];
		}
	}	
	cout << res;
}
