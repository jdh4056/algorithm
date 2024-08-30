#include <bits/stdc++.h>
using namespace std;

int gcd (int a, int b) {
    int cnt;

    while (b != 0) {
        cnt = a % b;
        a = b;
        b = cnt;
    }
    return a;
}

int lcm (int a, int b) {
    return a * b / gcd(a, b);
}
int main() {
    int A, B;
    cin >> A >> B;
    cout << gcd(A, B) << endl;
    cout << lcm(A, B);
}