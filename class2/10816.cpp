#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    int NArr[N];

    for (int i = 0; i < N; ++i) {
        cin >> NArr[i];
    }

    int M;
    cin >> M;
    int MArr[M];

    for (int i = 0; i < M; ++i) {
        cin >> MArr[i];
    }

    unordered_map<int, int> countMap;
    for (int i = 0; i < N; ++i) {
        countMap[NArr[i]]++;
    }

    int index[M] = {0};
    for (int i = 0; i < M; ++i) {
        index[i] = countMap[MArr[i]];
    }

    for (int i = 0; i < M; ++i) {
        cout << index[i] << " ";
    }
}