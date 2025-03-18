#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string command;
        cin >> command;
        if (command == "push") {
            int a;
            cin >> a;
            s.push(a);
        } else if (command == "pop") {
            if (s.empty()) cout << -1 << '\n';
            else {
                cout << s.top() << '\n';
                s.pop();
            }
        } else if (command == "top") {
            if (s.empty()) cout << -1 << '\n';
            else cout << s.top() << '\n';
        } else if (command == "empty") {
            if (s.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        } else if (command == "size") {
            cout << s.size() << '\n';
        }
    }
}