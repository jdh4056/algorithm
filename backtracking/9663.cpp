#include <bits/stdc++.h>
using namespace std;

int n;
int col[15];
int cnt = 0;

bool promising(int i) {
    for (int k = 1; k < i; ++k) {
        if (col[i] == col[k] || abs(col[i] - col[k]) == i - k) {
            return false;
        }
    }
    return true;
}

void queens(int i) {
    if (promising(i)) {
        if (i == n) {
            cnt++;
        } else {
            for (int j = 1; j <= n; ++j) {
                col[i + 1] = j;
                queens(i + 1);
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    queens(0);
    cout << cnt;
}