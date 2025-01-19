#include <bits/stdc++.h>
using namespace std;

int main() {
    int burger[3];
    int beverage[2];

    for (int i = 0; i < 3; ++i) {
        cin >> burger[i];
    }
    for (int i = 0; i < 2; ++i) {
        cin >> beverage[i];
    }

    int mn = INT_MAX;

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 2; ++j) {
            int set = burger[i] + beverage[j] - 50;
            mn = min(mn, set);
        }
    }

    cout << mn;
}