#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    cin.ignore();
    while (n--) {
        string str;
        getline(cin, str);
        if (str[0] > 90) {
            str[0] -= 32;
        }
        cout << str << '\n';
    }
}