#include <bits/stdc++.h>
using namespace std;

string F(string x) {
    string str;
    str = (x[0] - '0') * x.length();
    return str + '0';
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string x;
    cin >> x;

    while (true) {
        string str = F(x);
        if (str == x) {
            cout << "FA" << '\n';
            return 0;
        }
        x = str;
    }
}