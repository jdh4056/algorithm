#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;
    unordered_set<int> A;
    for (int i = 0; i < N; ++i) {
        int x;
        cin >> x;
        A.insert(x);
    }
    int M;
    cin >> M;
    int B[M];
    for (int i = 0; i < M; ++i) {
        cin >> B[i];
    }

    for (int i = 0; i < M; ++i) {
        if (A.count(B[i])) {
            cout << 1 << '\n';
        } else {
            cout << 0 << '\n';
        }
    }
}
