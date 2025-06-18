#include<bits/stdc++.h>
using namespace std;
int dp[1001];


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int a[1001];
    int len = 0;
    int tmp = 0;
    int idx = 0;
    vector<int> v;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        len = 0;
        for (int j = 1;j<i;j++) {
            if (a[j] < a[i]) len = max(dp[j], len);

        }
        dp[i] = len + 1;

        if (tmp < len + 1) {
            tmp = len + 1;
            idx = i;
        }
    }

    for (int i = idx; i >=1;i--) {
        if (dp[i] == tmp) {
            v.push_back(a[i]);
            tmp--;
        }
    }
    int sz = v.size();
    cout <<sz << '\n';
    for (int i =0; i < sz; i++) {
        cout << v.back() << " ";
        v.pop_back();
    }
}