#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int sum = 0, mn =INT_MAX;
        for (int i = 0; i < 7; ++i) {
            int a;
            cin >> a;
            if (a % 2 == 0) {
                sum += a;
                if (a < mn) {
                    mn = a;
                }
            }
        }
        cout << sum << " " << mn << '\n';

    }
}