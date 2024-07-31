#include <bits/stdc++.h>
using namespace std;

long fact(long n) {
    if (n < 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
int main() {
    int N;
    cin >> N;

    cout << fact(N) << '\n';
}