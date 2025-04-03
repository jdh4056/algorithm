#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    stack<char> st;
    stack<int> nst;
    int sum = 0;

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '(' || str[i] == '[') {
            st.push(str[i]);
        }
        if (str[i] == ')') {
            if (st.empty() || st.top() != '(') {
                cout << 0 << '\n';
                return 0;
            }
            if (!nst.empty() && st.top() == '(') {
                int cnt = nst.top();
                nst.pop();
                cnt *= 2;
                nst.push(cnt);
            } else {
                nst.push(2);
            }
            st.pop();
        } else if (str[i] == ']') {
            if (st.empty() || st.top()!= '[') {
                cout << 0 << '\n';
                return 0;
            }
            if (!nst.empty() && st.top() == '[') {
                int cnt = nst.top();
                nst.pop();
                cnt *= 3;
                nst.push(cnt);
            } else {
                nst.push(3);
            }
            st.pop();
        }
    }

    if (!st.empty()) {
        cout << 0 << '\n';
        return 0;
    }

    while (!nst.empty()) {
        cout << nst.top() << '\n';
        sum += nst.top();
        nst.pop();
    }

    cout << sum;
}

