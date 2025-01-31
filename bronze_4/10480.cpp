#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        cin >> a;
        if (a % 2 == 0) {
            cout << a << " is even\n";
        } else {
            cout << a << " is odd\n";
        }
    }
}