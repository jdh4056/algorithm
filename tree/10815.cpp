#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> vecN(N);

    for (int i = 0; i < N; i++) {
        cin >> vecN[i];
    }

    sort(vecN.begin(), vecN.end());

    int M;
    cin >> M;
    vector<int> vecM(M);

    for (int i = 0; i < M; i++) {
        cin >> vecM[i];
    }

    for (int i = 0; i < M; i++) {
        if (binary_search(vecN.begin(), vecN.end(), vecM[i])) {
            cout << "1 ";
        } else {
            cout << "0 ";
        }
    }
}