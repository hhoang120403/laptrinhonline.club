#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,h;
    cin >> a >> b >> h;
    if((h-b)%(b-a)) cout << (h-b)/(a-b) + 1;
    else cout << (h-b)/(a-b);
}
