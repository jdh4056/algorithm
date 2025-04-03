#include <bits/stdc++.h>
using namespace std;

int n, s;
int a[100005];
int mn = INT_MAX;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> s;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int st = 0, en = 0, cnt = 0;
    while (en < n) {
        cnt += a[en++];

        while (cnt >= s) {
            mn = min(mn, en - st);
            cnt -= a[st++];
        }
    }

    if (mn == INT_MAX) cout << 0 << '\n';
    else cout << mn << '\n';
}