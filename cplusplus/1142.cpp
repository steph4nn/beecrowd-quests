#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,t;
    t = 1;
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << t <<" "<< t+1 <<" "<< t+2 << " PUM" << endl;
        t += 4;
    }

    return 0;
}