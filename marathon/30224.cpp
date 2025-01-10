#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int num = stoi(s);

    auto a = find(s.begin(), s.end(), '7');
    if (a != s.end()) {
        if (num % 7 == 0) {
            cout << 3;
        } else {
            cout << 2;
        }
    } else {
        if (num % 7 == 0) {
            cout << 1;
        } else {
            cout << 0;
        }
    }
}