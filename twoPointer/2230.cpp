#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[100005];
int mn = INT_MAX;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);

    int st = 0, en = 0;
    while (st <= en) {
        if (en == n) break;
        if (a[en] - a[st] >= m) {
            mn = min(mn, a[en] - a[st]);
            st++;
        } else {
            en++;
        }
    }
    cout << mn;
}