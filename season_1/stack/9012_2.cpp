#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        stack<char> s;
        bool vps =true;
        string str;
        cin >> str;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == '(') s.push(str[i]);

            else if (str[i] == ')') {
                if (s.empty()) vps=false;
                else s.pop();
            }
        }

        if (!s.empty()) vps = false;

        if (vps) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
}