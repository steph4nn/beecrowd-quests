#include <bits/stdc++.h>

using namespace std;

int main(){
    map<int,int> dict = {{1,2},{2,5},{3,5},{4,4},{5,5},{6,6},{7,3},{8,7},{9,6},{0,6}};

    int n;
    cin >> n;
    for (int i =0; i < n;i++){
        string n2;
        cin >> n2;
        int t = 0;
        for (int j =0; j< n2.size();j++){
            int pos = n2[j] - '0'; 
            t += dict[pos];
        }
        cout << t << " leds" <<endl;
    }


return 0;
}