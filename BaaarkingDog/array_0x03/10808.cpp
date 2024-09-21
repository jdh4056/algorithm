#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    string S;
    cin >> S;

    int alphabet[26] = {};

    for (char ch : S) {
        alphabet[ch - 'a']++;
    }

    for (int i : alphabet) {
        cout << i << " ";
    }
}