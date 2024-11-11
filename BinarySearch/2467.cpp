#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int n;
ll a[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int st = 0, en = n - 1;
    int result1 = 1e9+5, result2 = 1e9+5;
    while(st < en) {
        if (abs(a[st]+a[en]) < abs(result1+result2)) {
            result1 = a[st];
            result2 = a[en];
        }
        if (abs(a[st] + a[en - 1]) <= abs(a[st+1] + a[en])) {
            en = en - 1;
        } else {
            st = st + 1;
        }
    }

    cout << result1 << " " << result2;
}