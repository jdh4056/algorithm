#include <bits/stdc++.h>
using namespace std;

int main() {
    int h;
    cin >> h;

    if (h % 2 == 0) {
        if (h == 0) cout << 1;
        else {
            int two = h / 2;
            for (int i = 0; i < two; ++i) {
                cout << 8;
            }
        }
    } else {
        if (h == 1) cout << 0;
        else {
            cout << 4;
            int two = h / 2;
            for (int i = 0; i < two; ++i) {
                cout << 8;
            }
        }

    }
}