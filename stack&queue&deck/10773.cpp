#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    stack<int> st;
    int K;
    cin >> K;

    int a;
    while (K--) {
        cin >> a;
        if (a == 0) {
            st.pop();
        } else {
            st.push(a);
        }
    }

    int total = 0;
    while(!st.empty()) {
        total += st.top();
        st.pop();
    }

    cout << total;
}