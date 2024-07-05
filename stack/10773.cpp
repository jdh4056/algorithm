#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int n;
    int num;
    int sum = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        s.push(num);
            if(num == 0) {
                s.pop();
                s.pop();
            }
    }
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }
    cout << sum;
}