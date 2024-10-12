#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        string str;
        cin >> str;
        stack<char> st;
        bool good = true;

        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == '(') {
                st.push(str[i]);
            }

            if (str[i] == ')') {
                if (st.empty() || st.top() == ')') {
                    good = false;
                    break;
                }
                st.pop();
            }
        }
        if (!st.empty()) {
            good =false;
        }

        if (good) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}