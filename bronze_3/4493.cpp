#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int win1 = 0, win2 = 0;
        while (n--) {
            char p1, p2;
            cin >> p1 >> p2;
            if (p1 == p2) {
                // 비긴 경우: 아무 점수도 안 줌
                continue;
            }

            if ((p1 == 'R' && p2 == 'S') ||
                (p1 == 'S' && p2 == 'P') ||
                (p1 == 'P' && p2 == 'R')) {
                win1++;
                } else {
                    win2++;
                }
        }

        if (win1 > win2) cout << "Player 1" << '\n';
        else if (win1 < win2) cout << "Player 2" << '\n';
        else cout << "TIE" << '\n';
    }
}
