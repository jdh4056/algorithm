#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); ++i) {
        str[i] = toupper(str[i]);
    }

    for (int i = 0; i < str.size(); ++i) {
        cout << str[i];
    }
}