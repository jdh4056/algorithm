#include <bits/stdc++.h>
using namespace std;

class Stack {
private:
    static const int MAX = 100001;
    int arr[MAX] {0};
    int pos;

public:
    Stack() : pos(0){};

    void push(int x) {
        arr[pos++] = x;
    }

    void pop() {
        if (pos == 0) {
            cout << -1 << '\n';
            return;
        }
        cout << arr[pos - 1] << '\n';
        pos--;
    }

    int size() {
        return pos;
    }

    int empty() {
        if (pos == 0) {
            return 1;
        } else {
            return 0;
        }
    }

    int top() {
        if (pos == 0) {
            return -1;
        } else {
            return arr[pos - 1];
        }
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Stack st;
    int N;
    cin >> N;

    string command;
    while (N--) {
        cin >> command;

        if (command == "push") {
            int data;
            cin >> data;
            st.push(data);
        } else if (command == "top") {
            cout << st.top() << '\n';
        } else if (command == "size") {
            cout << st.size() << '\n';
        } else if (command == "empty") {
            cout << st.empty() << '\n';
        } else if (command == "pop") {
            st.pop();
        }
    }
}