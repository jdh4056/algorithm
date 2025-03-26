#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin >> n >> k;
    queue<int> q;
    vector<int> v;
    for (int i = 1; i <= n; ++i) q.push(i);

    while (!q.empty()) {
        for (int i = 0; i < k; ++i) {
            if (i == k - 1) {
                int res = q.front();
                q.pop();
                v.push_back(res);
            } else {
                int f = q.front();
                q.pop();
                q.push(f);
            }
        }
    }

    cout << "<";
    for (int i = 0; i < n; ++i) {
        if (i == n - 1) cout << v[n-1] << ">";
        else cout << v[i] << ", ";

    }
}