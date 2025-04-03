#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string S, P;
    cin >> S;
    cin >> P;

    unordered_set<string> SSet;


    for (size_t i = 0; i < S.size(); ++i) {
        for (size_t len = 1; len <= S.size() - i; ++len) {
            SSet.insert(S.substr(i, len));
        }
    }

    if (SSet.find(P) != SSet.end()) {
        cout << 1;
    } else {
        cout << 0;
    }
}