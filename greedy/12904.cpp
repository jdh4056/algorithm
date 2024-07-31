#include <bits/stdc++.h>
using namespace std;

int main() {
    string S, T;
    cin >> S >> T;

    while (T.length() > S.length()) {
        if (T.back() == 'A') {
            T.pop_back();
        } else if (T.back() == 'B') {
            T.pop_back();
            reverse(T.begin(), T.end());
        }
    }

    if (S == T) {
        cout << 1;
    } else {
        cout << 0;
    }
}