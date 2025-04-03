#include <bits/stdc++.h>
using namespace std;

int main() {

    while (true) {
        string str;
        bool isValid = true;
        stack<char> st;
        getline(cin, str);
        if (str == ".") {
            break;
        }

        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(' || str[i] == '[') {
                st.push(str[i]);
            } else if (str[i] == ')') {
                if (st.empty() || st.top() != '(') {
                    isValid = false;
                    break;
                }
                st.pop();
            } else if (str[i] == ']') {
                if (st.empty() || st.top() != '[') {
                    isValid = false;
                    break;
                }
                st.pop();
            }
        }

        if (!st.empty()) {
            isValid = false;
        }

        if (isValid) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }
}
