#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int dp[20];

    dp[1] = 1, dp[2] = 2, dp[3] = 4;

    for (int i = 4; i <= 11; ++i) {
        dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
    }

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        cout << dp[n] << '\n';
    }
}