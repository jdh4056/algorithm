#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int coin = 100 * N;

    if (coin >= M) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}