#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


ll fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main(){
    int a,b;
    ll a2,b2;    
    while(cin >> a >> b){
        a2 = fact(a);
        b2 = fact(b);
        cout << a2+b2 << endl; 
    }
    return 0;
}