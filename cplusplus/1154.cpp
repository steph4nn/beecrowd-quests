#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int soma = 0;
    int qtd = 0;
    
    while (true) {
        int n;
        cin >> n;
        
        if (n < 0) {
            break;
        }
        
        soma += n;
        qtd += 1;   
    }
    double total = soma/qtd;
    cout << fixed << setprecision(2) << total << endl;

    return 0;
}
