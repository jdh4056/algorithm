#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    int count = 0;

    while (N--) {
        string str;
        cin >> str;
        stack<char> st;

        for (int i = 0; i < str.size(); ++i) {
            if (st.empty()) {
                st.push(str[i]);
            } else if (st.top() == str[i]) {
                st.pop();
            } else {
                st.push(str[i]);
            }
        }

        if (st.empty()) {
            count++;
        }
    }
    cout << count;
}