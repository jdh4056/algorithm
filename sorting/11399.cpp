#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int time[N];

    for (int i = 0; i < N; ++i) {
        int t;
        cin >> t;
        time[i] = t;
    }
    int size = (sizeof(time)/sizeof(*time));

    sort(time, time + size);

    int total = 0;
    int cnt = 0;
    for (int i = 0; i < N; ++i) {
        cnt += time[i];
        total += cnt;
    }

    cout << total;
}