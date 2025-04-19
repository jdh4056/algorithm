#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int a; cin >> a;

        double q = a / 25;
        a %= 25;

        double d = a / 10;
        a %= 10;
        double n = a / 5;
        a %= 5;
        double p = a / 1;

        cout << q << " " << d << " " << n << " " << p << '\n';


    }
}