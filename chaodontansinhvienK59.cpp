#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int a[n+12],maxRange[n+12],d[n+12];
    fill(maxRange,maxRange+n+1,-1);
    fill(d,d+n+1,INT_MAX);
    for(int i=0;i<n;i++) cin >> a[i];
    deque<int> dq;
    for (int i = 0; i<n; i++) { 
        while(dq.size() && a[dq.back()] < a[i]){ // Check xem hang doi day co rong khong va phan tu thu i co > phan tu o cuoi hang doi
        		if(d[dq.back()]>i-dq.back() && a[i]>a[dq.back()]){ // Check xem khoang cach co nho hon khong
        			maxRange[dq.back()] = i;
				} 
        	dq.pop_back();
		}
		if(!dq.empty() && a[i]<a[dq.back()]){
			maxRange[i] = dq.back();
			d[i] = i-dq.back();
		}
		if(!dq.empty() && a[i]==a[dq.back()]){
			maxRange[i] = maxRange[dq.back()];
			d[i] = i-dq.back()+d[dq.back()];
		}
        dq.push_back(i);
    
    }
    for(int i=0;i<n;i++){
        cout << maxRange[i] << " ";
    }
}
