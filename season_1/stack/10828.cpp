#include <iostream>
using namespace std;

class MyStack {
private:
    static const int MAX = 10000;
    int arr[MAX];
    int topData;
public:
    MyStack() : topData(-1) {}

    void push(int a) {
        if (topData >= MAX - 1) {
            return;
        }
        arr[++topData] = a;
    }

    void pop() {
        if (topData < 0) {
            cout << -1 << endl;
            return;
        }
        cout << arr[topData--] << endl;
    }

    int top() {
        if (topData < 0) {
            return -1;
        }
        return arr[topData];
    }

    int size() {
        return topData + 1;
    }

    bool empty() {
        return topData < 0;
    }
};

int main() {
    MyStack st;
    string str;
    int data;
    int n;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> str;

        if (str == "push") {
            cin >> data;
            st.push(data);
        } else if (str == "pop") {
            st.pop();
        } else if (str == "size") {
            cout << st.size() << endl;
        } else if (str == "empty") {
            if (st.empty()) {
                cout << "1" << endl;
            } else {
                cout << "0" << endl;
            }
        } else if (str == "top") {
            cout << st.top() << endl;
        }
    }
}