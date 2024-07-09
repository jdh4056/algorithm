#include <bits/stdc++.h>
using namespace std;
stack<int> st;
vector<char> q;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;

    int cnt = 1;
    for (int i = 0; i < n; i++) {
        int data;
        cin >> data;
        while(cnt <= data) {
            st.push(cnt);
            q.push_back('+');
            cnt++;
        }

        if (data == st.top()) {
            st.pop();
            q.push_back('-');
        } else {
            cout << "NO";
            return 0;
        }
    }

    for (char i : q) {
        cout << i << '\n';
    }
}