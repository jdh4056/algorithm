#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int cnt = 0;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cnt++;
        }
    }
    cout << cnt*n;
}