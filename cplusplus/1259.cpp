#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n;
    vector<int> arrP;
    vector<int> arrI;

    for (int i = 0; i < n; i++) {
        cin >> t;
        if (t % 2 == 0) {
            arrP.push_back(t);
        } else {
            arrI.push_back(t);
        }
    }

    sort(arrP.begin(), arrP.end());
    sort(arrI.begin(), arrI.end());
    reverse(arrI.begin(), arrI.end());

    for (int i = 0; i < arrP.size(); i++) {
        cout << arrP[i] << endl; 
    }

    for (int i = 0; i < arrI.size(); i++) {
        cout << arrI[i] << endl;
    }

    return 0;
}
