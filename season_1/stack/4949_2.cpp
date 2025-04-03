#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        string str;
        getline(cin, str);
        bool balance = true;
        stack<char> s;
        if (str == ".") break;

        for (int i = 0; i < str.length(); ++i) {
            if (str[i] == '(' || str[i] == '[') s.push(str[i]);
            else if (str[i] == ')') {
                if (s.empty() || s.top() != '(') {
                    balance = false;
                } else s.pop();
            } else if (str[i] == ']') {
                if (s.empty() || s.top() != '[') {
                    balance = false;
                } else s.pop();
            }
        }
        if (!s.empty()) balance = false;

        if (balance) cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
}