#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while (t--) {
        double n;
        string str;
        cin >> n >> str;
        if (str == "kg") {
            double result = n * 2.2046;
            cout << fixed << setprecision(4) << result << " lb\n";
        } else if (str == "lb") {
            double result = n * 0.4536;
            cout << fixed << setprecision(4) <<  result << " kg\n";
        } else if (str == "l") {
            double result = n * 0.2642;
            cout << fixed << setprecision(4) << result << " g\n";
        } else if (str == "g") {
            double result = n * 3.7854;
            cout << fixed << setprecision(4) << result << " l\n";
        }
    }
}