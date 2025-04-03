#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    deque<int> dq;
    int N;
    int command;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        cin >> command;

        if (command == 1) {
            int frontData;
            cin >> frontData;
            dq.push_front(frontData);
        } else if (command == 2) {
            int backData;
            cin >> backData;
            dq.push_back(backData);
        } else if (command == 3) {
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        } else if (command == 4) {
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        } else if (command == 5) {
            cout << dq.size() << '\n';
        } else if (command == 6) {
            if (dq.empty()) {
                cout << 1 << '\n';
            } else {
                cout << 0 << '\n';
            }
        } else if (command == 7) {
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.front() << '\n';
            }
        } else if (command == 8) {
            if (dq.empty()) {
                cout << -1 << '\n';
            } else {
                cout << dq.back() << '\n';
            }
        }
    }
}