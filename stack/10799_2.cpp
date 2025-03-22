#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    cin >> str;

    int cnt = 0;
    int stick = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '(') cnt++;
        else {
            cnt--;
            if (str[i-1] == '(') {
                stick += cnt;
            } else {
                stick++;
            }
        }
    }

    cout << stick;
}