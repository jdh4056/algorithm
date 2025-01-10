#include <bits/stdc++.h>
using namespace std;

int n,m;
int u,v,k;
int a[1000002], b[1000002], s[1000002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 1; i <= m; ++i) {
        cin >> b[i];
    }

    u = 1, v = 1, k = 1;
    while (u <= n && v <= m) {
        if (a[u] < b[v]) {
            s[k++] = a[u++];
        } else {
            s[k++] = b[v++];
        }
    }

    if (u > n) {
        while (v <= m) {
            s[k++] = b[v++];
        }
    } else {
        while (u <= n) {
            s[k++] = a[u++];
        }
    }

    for (int i = 1; i <= n+m; ++i) {
        cout << s[i] << " ";
    }
}