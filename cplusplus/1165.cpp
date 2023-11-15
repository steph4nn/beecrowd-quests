#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int entrada;
        int sum = 0;
        cin >> entrada;

        if (entrada == 1 || entrada == 2) {
            cout << entrada << " eh primo" << endl;
            continue;
        }

        for (int j = 1; j <= entrada; j++) {
            if (entrada % j == 0) {
                sum += 1;
            }
        }

        if (sum == 2) {
            cout << entrada << " eh primo" << endl;
        } else {
            cout << entrada << " nao eh primo" << endl;
        }
    }

    return 0;
}
