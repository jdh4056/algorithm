#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    char board[8][8];
    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            cin >> board[i][j];
        }
    }

    int sum = 0;
    for (int i = 0; i < 8; i += 2) {
        for (int j = 0; j < 8; j+= 2) {
            if (board[i][j] == 'F') sum++;
        }
    }

    for (int i = 1; i < 8; i += 2) {
        for (int j = 1; j < 8; j+= 2) {
            if (board[i][j] == 'F') sum++;
        }
    }

    cout << sum;
}