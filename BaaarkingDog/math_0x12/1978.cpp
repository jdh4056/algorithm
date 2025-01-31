#include <bits/stdc++.h>
using namespace std;

int n;
bool isprime(int n) {
    if (n == 1) return 0;
    for (int i = 2; i*i <= n; ++i) {
        if (n % i == 0) return 0;
    }
    return 1;
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if(isprime(a)) cnt++;
    }
    cout << cnt;
}