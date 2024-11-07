#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    int M;
    cin >> M;
    int B[M];
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }

    sort(A, A + N);

    for (int i = 0; i < M; ++i) {
        int target = B[i];
        int low = 0, high = N - 1;
        bool isThere = false;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (A[mid] == target) {
                isThere = true;
                break;
            } else if (A[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        if (isThere) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
}