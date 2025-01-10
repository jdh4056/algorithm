#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string str;
        cin >> str;
        for(char &c : str) {
            c = tolower(c);
            cout << c;
        }
        cout << '\n';
    }
}