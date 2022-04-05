#include<bits/stdc++.h>
#include <math.h>

using namespace std;

int main(){
    long long t,s;
    cin >> t >> s;
    long p;
    cin >> p;
    long long k = log(t/s)/log(1+1.0*(p/100));
    cout << k << endl;
}
