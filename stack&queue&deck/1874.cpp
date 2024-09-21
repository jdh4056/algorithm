#include <bits/stdc++.h>
using namespace std;

stack<int> st;
vector<char> vec;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int data = 1;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        while (num >= data) {
            st.push(data++);
            vec.push_back('+');
        }


        if (num == st.top()) {
            st.pop();
            vec.push_back('-');
        } else {
            cout << "NO\n";
            return 0;
        }
    }

    for (char ch : vec) {
        cout << ch << '\n';
    }
}
