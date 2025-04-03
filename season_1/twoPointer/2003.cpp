#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[10002];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int st = 0, en = 0;
    int sum = 0, count = 0;

    while (en <= n) {
        if (sum == m) {
            count++;
            sum -= a[st++];
        } else if (sum < m) {
            sum += a[en++];
        } else {
            sum -= a[st++];
        }
    }
    cout << count;
}