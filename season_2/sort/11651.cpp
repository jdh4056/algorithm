#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;

    vector<pair<int, int> > v;
    for (int i = 0; i < n; i++) {
        int a,b; cin >> a>> b;
        v.push_back({a,b});
    }
    stable_sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;});

    for (int i =0;i<n;i++) {
        cout << v[i].first << " " << v[i].second << '\n';
    }
}