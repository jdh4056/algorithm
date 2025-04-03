#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> q;
    int N;
    cin >> N;

    while (N--) {
        string command;
        cin >> command;

        if (command == "push") {
            int dat;
            cin >> dat;
            q.push(dat);
        } else if (command == "front") {
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.front() << '\n';
            }
        } else if (command == "back") {
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.back() << '\n';
            }
        } else if (command == "size") {
            cout << q.size() << '\n';
        } else if (command == "empty") {
            if (q.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if (command == "pop") {
            if (q.empty()) {
                cout << -1 << '\n';
            } else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
    }
}