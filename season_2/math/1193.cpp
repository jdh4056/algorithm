#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x; cin >> x;

    int n = 1;
    while (x > (n*(n+1))/2) n++;

    int a = x - ((n-1)*n)/2;

    if (n % 2 == 1) {
        cout << n - a + 1 << "/" << a;
    } else {
        cout << a << "/" << n - a + 1;
    }
}