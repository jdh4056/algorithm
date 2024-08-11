#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long f[117] = {0,1,1,1};

    for (int i = 3; i <= n; ++i) {
        f[i] = f[i-1]+f[i-3];
    }
    cout << f[n];
}