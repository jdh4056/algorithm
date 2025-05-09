#include<bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int mn = INT_MAX;
    for (int i = 0; i < n; i++) {
        int sum = i;
        string s = to_string(i);
        for (int j = 0; j < s.size(); j++) {
            sum += s[j] - '0';
        }
        if (sum == n) {
            mn = min(mn, i);
        }
    }

    if (mn == INT_MAX) {
        cout << 0;
    } else {
        cout << mn;
    }
}