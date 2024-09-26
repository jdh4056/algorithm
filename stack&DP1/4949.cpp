#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    while (true) {
        string str;
        stack<char> st;
        bool balance = true;

        getline(cin, str);

        if (str == ".") {
            break;
        }

        for (char i : str) {
            if (i == '[' || i == '(') {
                st.push(i);
            } else if (i == ']') {
                if (st.empty() || st.top() != '[') {
                    balance = false;
                    break;
                }
                st.pop();
            } else if (i == ')') {
                if (st.empty() || st.top() != '(') {
                    balance = false;
                    break;
                }
                st.pop();
            }
        }

        if (!st.empty()) {
            balance = false;
        }

        if (balance) {
            cout << "yes" << '\n';
        } else {
            cout << "no" << '\n';
        }
    }
}
