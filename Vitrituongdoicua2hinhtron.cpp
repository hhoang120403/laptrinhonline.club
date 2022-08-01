#include<bits/stdc++.h>
#include<math.h>
using namespace std;

float khoangcach(int x1,int y1,int x2, int y2){
    return sqrt(pow(x1-x2,2)+pow(y1-y2,2));
}

void solve(){
    int x1,y1,r1,x2,y2,r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    float kc = khoangcach(x1,y1,x2,y2);
    int d1 = abs(r1-r2);
    int d2 = r1+r2;
    if(x1==x2 && y1==y2 && r1==r2) cout << "trung nhau" << endl;
    else if(kc<=d1) cout << "chua nhau" << endl;
    else if(d1<kc && kc<d2) cout << "cat nhau" << endl;
    else if(kc==d2) cout << "tiep xuc" << endl;
    else cout << "roi nhau" << endl;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
