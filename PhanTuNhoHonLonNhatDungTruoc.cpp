#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    map<int, int> M;
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        M[x]++;
        auto it = M.lower_bound(x);
        if (it == M.begin()){
        	cout << "0\n";
		}           
        else{
            it--;
            cout << (*it).first << " " << (*it).second << "\n";
        }
    }
}
