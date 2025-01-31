#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int cnt = 0;
    for (int i = 0; i < 5; ++i) {
        int a;
        cin >> a;
        if (a == t) cnt++;
    }
    cout << cnt;
}