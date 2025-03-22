#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int cnt = 0;
    while (n--) {
        stack<char> st;
        string s;
        cin >> s;

        for (int i = 0; i < s.length(); ++i) {
            if (!st.empty() && st.top() == s[i]) {
                st.pop();
            } else st.push(s[i]);
        }

        if (st.empty()) cnt++;
        /*
        bool good = true;
        for (int i = 0; i < s.length(); i++) {
            if (st.empty()) st.push(s[i]);
            else if (s[i] == 'A') {
                if (st.top() == 'B') {
                    char t = st.top();
                    st.pop();
                    char prev = st.top();
                    st.push(t);
                    if (prev == 'A') {
                        good = false;
                        break;
                    }
                    st.push(s[i]);
                }
                else if (st.top() == 'A') st.pop();
            }
            else {
                if (st.empty()) st.push(s[i]);
                else if (st.top() == 'A') {
                    char t = st.top();
                    st.pop();
                    char prev = st.top();
                    st.push(t);
                    if (prev == 'B') {
                        good = false;
                        break;
                    }
                    st.push(s[i]);
                }
                else if (st.top() == 'B') st.pop();
            }
            if (!st.empty()) good = false;
        }
        if (good) cnt++;
        */
    }
    cout << cnt;
}