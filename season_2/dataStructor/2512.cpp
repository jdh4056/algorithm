#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int size = n;
    int arr[n];
    int sum = 0;
    int mx = 0;
    for (int i = 0; i < n; ++i) {
        int a; cin >> a;
        arr[i] = a;
        sum += a;
        if (mx < a) mx = a;
    }

    int m; cin >> m;
    if (m >= sum) cout << mx;
    else {
        int lo = 0, hi = mx;
        int ans = 0;

        while (lo <= hi) {
            int mid = (lo + hi) / 2;
            long long total = 0;

            for (int i = 0; i < n; ++i)
                total += min(arr[i], mid);

            if (total <= m) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        cout << ans;
    }
}