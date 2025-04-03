#include <bits/stdc++.h>
using namespace std;

int n, m;
unordered_map<string, string> s2n;
unordered_map<string, string> n2s;



int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        string str;
        cin >> str;
        string num = to_string(i+1);
        s2n.insert({str, num});
        n2s.insert({num, str});
    }

    for (int i = 0; i < m; ++i) {
        string ans;
        cin >> ans;

        auto a = s2n.find(ans);
        if (a != s2n.end()) {
            cout << a->second << '\n';
        } else {
            auto b = n2s.find(ans);
            if (b != n2s.end()) {
                cout << b->second << '\n';
            }
        }
    }
}