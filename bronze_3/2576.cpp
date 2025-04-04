#include <bits/stdc++.h>
using namespace std;

int main() {
    int sum = 0, mn = INT_MAX;
    for (int i = 0; i < 7; i++) {
        int a; cin >> a;
        if (a % 2 != 0) {
            sum += a;
            mn = min(a, mn);
        }
    }

    if (sum == 0 && mn == INT_MAX) cout << -1;
    else cout << sum << '\n' << mn;
}