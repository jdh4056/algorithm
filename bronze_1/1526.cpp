#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = n; i >=4; i--) {
        bool check = true;
        string stringN = to_string(i);
        for (int j = 0; j < stringN.size(); ++j) {
            if (stringN[j] != '4' && stringN[j] != '7') {
                check = false;
                break;
            }
        }
        if (check) {
            cout << i;
            return 0;
        }
    }
}