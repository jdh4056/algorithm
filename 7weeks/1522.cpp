#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    int n = str.size();
    int a = count(str.begin(), str.end(), 'a');

    int minA = a;
    int b = 0;

    cout << minA << '\n';

    for (int i = 0; i < a; ++i) {
        if (str[i] == 'b') {
            b++;
        }
    }
    minA = min(minA, b);
    cout << minA << '\n';

    for (int i = a; i < n + a; ++i) {
        if (str[i % n] == 'b') {
            b++;
        }
        if (str[(i - a) % n] == 'b') {
            b--;
        }
        minA = min(minA, b);
    }

    cout << minA;
}