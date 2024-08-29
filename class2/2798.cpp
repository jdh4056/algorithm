#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,M;
    cin >> N >> M;

    int card[N];

    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        card[i] = a;
    }

    int max = 0;
    int blackJack = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            for (int k = j + 1; k < N; ++k) {
                blackJack = card[i] + card[j] + card[k];
                if (blackJack <= M && max < blackJack) {
                    max = blackJack;
                }
            }
        }
    }

    cout << max;
}