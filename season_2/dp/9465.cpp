#include<bits/stdc++.h>
using namespace std;
int board[2][100010];
int d[2][100010];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    int n;
    while (t--) {
        fill(&board[0][0], &board[1][100000], 0);

        cin >> n;
        for (int i = 0; i <2;i++) {
            for (int j = 0; j < n; j++) {
                cin >> board[i][j];
            }
        }

        d[0][0] = board[0][0];
        d[1][0] = board[1][0];
        d[0][1] = board[1][0] + board[0][1];
        d[1][1] = board[0][0] + board[1][1];

        for (int i = 2; i < n; i++) {
            d[0][i] = max({d[0][i-2], d[1][i-2], d[1][i-1]}) + board[0][i];
            d[1][i] = max({d[0][i-2], d[1][i-2], d[0][i-1]}) + board[1][i];
        }

        cout << max(d[0][n-1], d[1][n-1]) << '\n';
    }
}