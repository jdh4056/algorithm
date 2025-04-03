#include <bits/stdc++.h>
using namespace std;

int check[100002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k, mx = -1;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int en = 0;
    int st = 0;
    for (int st = 0; st < n; st++) {
        while (en < n && check[a[en]] < k) {
            check[a[en]]++;
            en++;
        }
        mx = max(mx, en - st);
        if (en == n) break;
        check[a[st]]--;
    }
    cout << mx << '\n';
}