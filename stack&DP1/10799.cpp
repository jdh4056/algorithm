#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;
    stack<char> st;
    int count = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '(') {
            st.push(str[i]);
        } else if (str[i] == ')') {
            if (str[i - 1] == '(') {
                st.pop();
                count += st.size();
            } else {
                st.pop();
                count++;
            }
        }
    }

    cout << count;
}