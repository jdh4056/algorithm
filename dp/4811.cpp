#include<bits/stdc++.h>
using namespace std;

long long d[33][33];

int main() {
    for (int h = 0; h <= 30; h++) {
        for (int w = 0; w <= 30; w++) {
            if (h > w) continue;
            if (h == 0) d[w][h] = 1;
            else d[w][h] = d[w - 1][h] + d[w][h - 1];
        }
    }
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        cout << d[n][n] << "\n";
    }
}