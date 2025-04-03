#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    queue<int> q;
    string str;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> str;

        if (str == "push") {
            int data;
            cin >> data;
            q.push(data);
        } else if (str == "front") {
            if (q.empty()) {
                cout << "-1\n";
            } else {
                cout << q.front() << '\n';
            }
        } else if (str == "back") {
            if (q.empty()) {
                cout << "-1\n";
            } else {
                cout << q.back() << '\n';
            }
        } else if (str == "size") {
                cout << q.size() << '\n';
        } else if (str == "pop") {
                if (q.empty()) {
                    cout << "-1\n";
                } else {
                    cout << q.front() << '\n';
                    q.pop();
                }
        } else if (str == "empty") {
            cout << (int) q.empty() << '\n';
        }
    }
}
