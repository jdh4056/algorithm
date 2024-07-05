#include <iostream>
using namespace std;

class MyQueue {
private:
    static const int MAX = 10000;
    int arr[MAX];
    int frontData;
    int rearData;
public:
    MyQueue() : frontData(0), rearData(0){}

    void push(int data) {
        if (rearData >= MAX - 1) {
            return;
        }
        arr[rearData] = data;
        rearData++;
    }

    bool empty() {
        return rearData == frontData;
    }

    void pop() {
        if (empty()) {
            cout << -1 << endl;
            return;
        }
        cout << arr[frontData] << endl;
        frontData++;
    }

    int size() {
        return rearData - frontData;
    }

    int front() {
        if (empty()) {
            return -1;
        }
        return arr[frontData];
    }

    int back() {
        if (empty()) {
            return - 1;
        }
        return arr[rearData - 1];
    }
};
int main() {
    MyQueue q;
    string str;
    int data;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> str;
        if (str == "push") {
            cin >> data;
            q.push(data);
        } else if (str == "front") {
            cout << q.front() << endl;
        } else if (str == "back") {
            cout << q.back() << endl;
        } else if (str == "size") {
            cout << q.size() << endl;
        } else if (str == "pop") {
            q.pop();
        } else if (str == "empty") {
            if (q.empty()) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
        }
    }

}