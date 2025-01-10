#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    int s;
    cin >> t >> s;
    if (s == 0 && (t >= 12 && t <= 16)) {
        cout << 320;
    } else {
        cout << 280;
    }
}