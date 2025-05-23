#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    if (n == 0) cout << 0;
    string res;
    while (n != 0) {
        int r = n % -2;
        n /= -2;

        if (r < 0) {
            n += 1;
            r += 2;
        }
        res = to_string(r) + res;
    }

    cout << res;
}