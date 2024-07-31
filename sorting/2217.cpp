#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int weight[N];

    for (int i = 0; i < N; ++i) {
        int a;
        cin >> a;
        weight[i] = a;
    }

    int size = (sizeof(weight)/sizeof(*weight));
    sort(weight, weight + size);

    int total = 0;
    int max = 0;
    for (int i = 0; i < N; ++i) {
        total = weight[i] * (N - i);
        if (total > max) {
            max = total;
        }
    }

    cout << max;
}