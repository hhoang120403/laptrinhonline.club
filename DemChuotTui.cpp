#include<bits/stdc++.h>
using namespace std;

int partition(int a[], int low, int high){
    int pivot = a[high];
    int left = low;
    int right = high-1;
    while(true){
        while(left<=right && a[left]<pivot) left++;
        while(right>=left && a[right]>pivot) right--;
        if(left>=right) break;
        swap(a[left],a[right]);
        left++;
        right--;
    }
    swap(a[left],a[high]);
    return left;
}

void quicksort(int a[], int low, int high){
    if(low<high){
        int p = partition(a,low,high);
        quicksort(a,low,p-1);
        quicksort(a,p+1,high);
    }
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n+4];
    for(int i=0;i<n;i++) cin >> a[i];
    quicksort(a,0,n-1);
    int first=0,last=(n+1)/2;
    while(last<n){
        if(a[first]*2<=a[last]){
            first++;
            last++;
        }
        else last++;
    }
    cout << n-first;
}
