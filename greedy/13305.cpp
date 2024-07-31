#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<long long> distance(N-1);
    vector<long long> price(N);

    for (int i = 0; i < N-1; ++i) {
        cin >> distance[i];
    }

    for (int i = 0; i < N; ++i) {
        cin >> price[i];
    }

    long long total = 0;
    long long min = price[0];

    for (int i = 0; i < N-1; ++i) {
        if (price[i] < min) {
            min = price[i];
        }
        total += min * distance[i];
    }

    cout << total;
}