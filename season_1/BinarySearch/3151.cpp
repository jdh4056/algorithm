#include <bits/stdc++.h>
using namespace std;

int n;
int a[10002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a+n);

    long long result = 0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            auto upper = upper_bound(a + j + 1, a + n, - (a[i]+a[j]));
            auto lower = lower_bound(a + j + 1, a + n, - (a[i]+a[j]));
            result += (upper - lower);
        }
    }

    cout << result;
}