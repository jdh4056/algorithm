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
            girl[Y-1]++;
        } else {
            boy[Y-1]++;
        }
    }

    int room = 0;
    for (int i = 0; i < 6; ++i) {
        room += boy[i] / 2;
        if (boy[i] % 2 != 0) {
            room++;
        }
        room += girl[i] / 2;
        if (girl[i] % 2 != 0) {
            room++;
        }
    }

    cout << room;
}