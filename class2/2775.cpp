#include <bits/stdc++.h>
using namespace std;

int main() {
    /*0 : 1 / 2 / 3
    1 : 1 / 3 / 6
    2 : 1 / 4 / 10 */

    int T;
    cin >> T;
    while (T--) {
        int k, n;
        cin >> k;
        cin >> n;

        int apt[k+1][n+1];

        for (int i = 1; i <= n; ++i) {
            apt[0][i] = i;
        }

        for (int i = 1; i <= k; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (j == 1) {
                    apt[i][j] = 1;
                } else {
                    apt[i][j] = apt[i - 1][j] + apt[i][j - 1];
                }
            }
        }

        cout << apt[k][n] << endl;
    }
}