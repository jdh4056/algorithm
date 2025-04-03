#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> st;
    int n;
    cin >> n;

    while (n--) {
        string command;
        cin >> command;
        if (command == "push") {
            int a; cin >> a;
            st.push(a);
        } else if (command == "pop") {
            if (st.empty()) cout << -1 << '\n';
            else {
                cout << st.top() << '\n';
                st.pop();
            }
        } else if (command == "size") {
            cout << st.size() << '\n';
        } else if (command == "empty") {
            if (st.empty()) cout << 1 << '\n';
            else cout << 0 << '\n';
        } else if (command == "top") {
            if (st.empty()) cout << -1 << '\n';
            else cout << st.top() << '\n';
        }
    }
}