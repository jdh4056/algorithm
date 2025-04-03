#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    deque<int> dq;
    int N;
    cin >> N;

    for (int i = 1; i <= N; ++i) {
        dq.push_front(i);
    }

    while (!dq.empty()) {
        if (dq.size() == 1) {
            cout << dq.front();
            return 0;
        }
        dq.pop_back();

        int cnt = dq.back();
        dq.pop_back();
        dq.push_front(cnt);
    }
}