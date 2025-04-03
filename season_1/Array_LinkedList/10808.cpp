#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int alphabet[26] = {0};

    for (char ch : S) {
        alphabet[ch - 'a']++;
    }

    for (int i = 0; i < 26; ++i) {
        cout << alphabet[i] << " ";
    }
}