#include <bits/stdc++.h>
using namespace std;

int main() {
    int E, S, M;
    cin >> E >> S >> M;

    int year = 1;
    while (true) {

        int e = (year - 1) % 15 + 1;
        int s = (year - 1) % 28 + 1;
        int m = (year - 1) % 19 + 1;

        if (e == E && s == S && m == M) {
            break;
        }
        year++;
    }

    cout << year << endl;
    return 0;
}
