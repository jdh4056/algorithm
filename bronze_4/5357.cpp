#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string str;
        getline(cin, str);
        string result;
        char prev = '\0';
        for (char ch : str) {
            if (ch != prev) {
                result += ch;
                prev = ch;
            }
        }
        cout << result << '\n';
    }
}