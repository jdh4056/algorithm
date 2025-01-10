#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    cin.ignore();

    while (t--) {
        string str;
        getline(cin, str);
        int cnt = 0;
        for (int i = 0; i < str.size(); ++i) {
            if (str[i] == ' ' ) {
               reverse(str.begin() + cnt, str.begin() + i);
                cnt = i+1;
            }
            if (i == str.size() - 1) {
                reverse(str.begin() + cnt, str.end());
            }
        }
        cout << str << '\n';
    }
}