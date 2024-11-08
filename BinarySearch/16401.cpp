#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, N;
    cin >> M >> N;

    int L[N];
    int max_length = 0;
    for (int i = 0; i < N; ++i) {
        cin >> L[i];
        if (L[i] > max_length) {
            max_length = L[i];
        }
    }

    int low = 1;
    int high = max_length;
    int result = 0;

    while (low <= high) {
        int mid = (low + high) / 2;
        int target = 0;

        for (int i = 0; i < N; ++i) {
            target += L[i] / mid;
        }

        if (target >= M) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << result;
}