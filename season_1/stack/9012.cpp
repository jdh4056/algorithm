#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        bool VPS = true;
        stack<char> s;
        string str;
        cin >> str;

        for (int j = 0; j < str.length(); j++) {
            if (str[j] == '(') {
                s.push(str[j]);
            } else if (str[j] == ')') {
                if (s.empty() || s.top() != '(') {
                    VPS = false;
                    break;
                }
                s.pop();
            }
        }
        if (!s.empty()) {
            VPS = false;
        }

        if (VPS) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
