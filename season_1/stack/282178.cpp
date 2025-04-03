#include <iostream>
#include <stack>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    stack<int> st;
    int N;
    int command;
    cin >> N;

    while (N--) {
        cin >> command;
        if (command == 1) {
            int data;
            cin >> data;
            st.push(data);
        } else if (command == 2) {
            if (st.empty()) {
                cout << "-1" << '\n';
            } else {
                cout << st.top() << '\n';
                st.pop();
            }
        } else if (command == 3) {
            cout << st.size() << '\n';
        } else if (command == 4) {
            if (st.empty()) {
                cout << "1" << '\n';
            } else {
                cout << "0" << '\n';
            }
        } else if (command == 5) {
            if (!st.empty()) {
                cout << st.top() << '\n';
            } else {
                cout << "-1" << '\n';
            }
        }
    }
}