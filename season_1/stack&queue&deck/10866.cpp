#include <bits/stdc++.h>
using namespace std;

class Deque {
    static const int MAX = 100001;
    int arr[2*MAX + 1];
    int head = MAX, tail = MAX;

public:
    void push_front(int x) {
        arr[--head] = x;
    }

    void push_back(int x) {
        arr[tail++] = x;
    }

    void pop_front() {
        if (head - tail == 0) {
            cout << -1 << '\n';
            return;
        }
        cout << arr[head++] << '\n';
    }

    void pop_back() {
        if (head - tail == 0) {
            cout << -1 << '\n';
            return;
        }
        cout << arr[--tail] << '\n';
    }

    int size() {
        return tail - head;
    }

    int empty() {
        if (tail - head == 0) {
            return 1;
        }
        return 0;
    }

    int front() {
        if (tail - head == 0) {
            return -1;
        }
        return arr[head];
    }

    int back() {
        if (tail - head == 0) {
            return -1;
        }
        return arr[tail - 1];
    }
};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Deque dq;
    int N;
    cin >> N;

    while (N--) {
        string command;
        cin >> command;

        if (command == "push_back") {
            int dat;
            cin >> dat;
            dq.push_back(dat);
        } else if (command == "push_front") {
            int dat;
            cin >> dat;
            dq.push_front(dat);
        } else if (command == "front") {
            cout << dq.front() << '\n';
        } else if (command == "back") {
            cout << dq.back() << '\n';
        } else if (command == "size") {
            cout << dq.size() << '\n';
        } else if (command == "empty") {
            cout << dq.empty() << '\n';
        } else if (command == "pop_front") {
            dq.pop_front();
        } else if (command == "pop_back") {
            dq.pop_back();
        }
    }
}