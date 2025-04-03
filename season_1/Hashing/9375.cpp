#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        unordered_map<string, int> m;
        while (n--) {
            string name, type;
            cin >> name >> type;
            m[type]++;
        }

        int result = 1;
        for (auto e : m) {
            result *= (e.second + 1);
        }

        cout << result - 1 << '\n';
    }
}