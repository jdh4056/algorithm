#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    stack<int> st;
    int temp = 1;
    int result = 0;

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '(') {
            st.push('(');
            temp *= 2;
        } else if (str[i] == '[') {
            st.push('[');
            temp *= 3;
        } else if (str[i] == ')') {
            if (st.empty() || st.top() != '(') {
                cout << 0;
                return 0;
            }
            if (str[i - 1] == '(') {
                result += temp;
            }
            st.pop();
            temp /= 2;
        } else if (str[i] == ']') {
            if (st.empty() || st.top() != '[') {
                cout << 0;
                return 0;
            }
            if (str[i - 1] == '[') {
                result += temp;
            }
            st.pop();
            temp /= 3;
        }
    }

    if (!st.empty()) {
        cout << 0;
    } else {
        cout << result;
    }
}
