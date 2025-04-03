#include <bits/stdc++.h>
using namespace std;

class Queue {
private:
    static const int MAX = 100001;
    int arr[MAX];
    int head, tail;

public:
    Queue() : head(0),tail(0){}

    void push(int x) {
        arr[tail++] = x;
    }

    void pop() {
        if (head - tail == 0) {
            cout << -1 << '\n';
            return;
        }
        cout << arr[head++] << '\n';
    }

    int size() {
       return tail - head;
    }

    int empty() {
        if (head - tail == 0) {
            return 1;
        }
        return 0;
    }

    int front() {
        if (head - tail == 0) {
            return -1;
        }
        return arr[head];
    }

    int back() {
        if (head - tail == 0) {
            return -1;
        }
        return arr[tail - 1];
    }
};
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    Queue q;
    int N;
    cin >> N;

    while (N--) {
        string command;
        cin >> command;

        if (command == "push") {
            int data;
            cin >> data;
            q.push(data);
        } else if (command == "front") {
            cout << q.front() << '\n';
        } else if (command == "back") {
            cout << q.back() << '\n';
        } else if (command == "size") {
            cout << q.size() << '\n';
        } else if (command == "empty") {
            cout << q.empty() << '\n';
        } else if (command == "pop") {
            q.pop();
        }
    }
}