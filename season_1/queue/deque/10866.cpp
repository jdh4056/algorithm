#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    deque<int> dq;
    int N;
    string command;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> command;
        if (command == "push_front") {
            int data;
            cin >> data;
            dq.push_front(data);
        } else if (command == "push_back") {
            int data;
            cin >> data;
            dq.push_back(data);
        } else if (command == "pop_front") {
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        } else if (command == "pop_back") {
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        } else if (command == "size") {
            cout << dq.size() << '\n';
        } else if (command == "empty") {
            if (dq.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if (command == "front") {
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.front() << '\n';
            }
        } else if (command == "back") {
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.back() << '\n';
            }
        }
    }
}