#include<bits/stdc++.h>
using namespace std;

int dp[1500001];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<pair<int,int>> v;
    int day, cost;

    v.push_back({0,0});

    for (int i =0;i<n;i++) {
        cin >> day >> cost;
        v.push_back({day, cost});
    }

    int mx = 0;
    for (int i = 1;i<=n+1;i++) {
        mx = max(mx, dp[i]);
        if (i + v[i].first > n+1) continue;
        dp[i + v[i].first] = max(dp[i+v[i].first], mx + v[i].second);

    }

    cout << mx;
}