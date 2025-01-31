#include <bits/stdc++.h>
using namespace std;

int n;
pair<int, int> a[100005];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i].second >> a[i].first;
    }
    sort(a, a+n);
    int end = a[0].first;
    int cnt = 1;
    for (int i = 1; i < n; ++i) {
        if (end <= a[i].second) {
            cnt++;

            end = a[i].first;
        }
    }

    cout << cnt;
}

