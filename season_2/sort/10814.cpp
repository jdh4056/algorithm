#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, string> > v;
    int n; cin >> n;
    for (int i = 0;i<n;i++) {
        int a; string s;
        cin >> a >> s;
        v.push_back({a,s});
    }

    stable_sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
    return a.first < b.first;
});


    for (int i =0;i<n;i++) {
        cout << v[i].first << " " << v[i].second << '\n';
    }
}