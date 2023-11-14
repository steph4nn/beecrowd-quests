#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    double n1,n2,b;
    string name;
    cin >> name >> n1 >> n2;
    n2 = n2*0.15;
    n1 = n1+n2;
    cout << fixed << setprecision(2) << "TOTAL = R$ "<< n1 <<endl;
    return 0;
}