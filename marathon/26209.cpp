#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[8];
    for (int i = 0; i < 8; ++i) {
        cin >> arr[i];
    }

    bool check[8];
    for (int i = 0; i < 8; ++i) {
        if (arr[i] == 0 || arr[i] == 1) {
            check[i] = true;
        } else if (arr[i] == 9) {
            check[i] = false;
        }
    }

    for (int i = 0; i < 8; ++i) {
        if (!check[i]) {
            cout << "F";
            return 0;
        }
    }
    cout << "S";
}