#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    int S, Y;
    int boy[7] = {0};
    int girl[7] = {0};
    cin >> N >> K;

    while (N--) {
        cin >> S >> Y;

        if (S == 0) {
            girl[Y]++;
        } else {
            boy[Y]++;
        }
    }

    int room = 0;
    for (int i = 1; i <= 6; ++i) {
        if (boy[i] % K == 0) {
            room += boy[i] / K;
        } else {
            room += boy[i] / K + 1;
        }
    }
    for (int i = 1; i <= 6; ++i) {
        if (girl[i] % K == 0) {
            room += girl[i] / K;
        } else {
            room += girl[i] / K + 1;
        }
    }

    cout << room;
}