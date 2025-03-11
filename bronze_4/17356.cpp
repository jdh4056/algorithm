#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    double m = (b-a)/400.0;
    double n = 1/(1+pow(10,m));
    cout << fixed << setprecision(10) << n;
}