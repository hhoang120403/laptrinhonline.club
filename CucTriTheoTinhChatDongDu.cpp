#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n;
    cin >> n;
    int a[n+1];
    int maxx[4],minn[4];
    memset(maxx,-10001,sizeof(maxx));
    memset(minn,10001,sizeof(minn));
    int check[4]={};
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]>=0){
            if(a[i]%3==0){
                maxx[0] = max(maxx[0],a[i]); 
                minn[0] = min(minn[0],a[i]);
                check[0] = 1;
            }
            if(a[i]%3==1){
                maxx[1] = max(maxx[1],a[i]);
                minn[1] = min(minn[1],a[i]); 
                check[1] = 1;
            }
            if(a[i]%3==2){
                maxx[2] = max(maxx[2],a[i]); 
                minn[2] = min(minn[2],a[i]); 
                check[2] = 1;
            }
        }
        else{
            if(a[i]%3==0){
                maxx[0] = max(maxx[0],a[i]); 
                minn[0] = min(minn[0],a[i]);
                check[0] = 1;
            }
            if(a[i]%3==-1){
                maxx[2] = max(maxx[2],a[i]); 
                minn[2] = min(minn[2],a[i]); 
                check[2] = 1;
            }
            if(a[i]%3==-2){
                maxx[1] = max(maxx[1],a[i]);
                minn[1] = min(minn[1],a[i]); 
                check[1] = 1;
            }
        }
        
    }
    for(int i=0;i<3;i++){
        if(check[i]) cout << minn[i] << " " << maxx[i] << endl;
        else cout << "Khong co so nao chia 3 du " << i << endl;
    }

}
