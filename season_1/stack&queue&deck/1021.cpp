#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, M;
    cin >> N >> M;
    deque<int> dq;

    for (int i = 0; i < N; ++i) {
        dq.push_back(i + 1);
    }

    int count = 0;
    while (M--) {
        int num;
        cin >> num;

        if (num == dq.front()) {
            dq.pop_front();
            continue;
        }

        int size = dq.size();
        int left = (find(dq.begin(), dq.end(), num) - dq.begin());
        int right = size - left;

        if (left < right) {
            while(dq.front() != num) {
                int cnt = dq.front();
                dq.pop_front();
                dq.push_back(cnt);
                count++;
            }
        } else {
            while (dq.front() != num) {
                int cnt = dq.back();
                dq.pop_back();
                dq.push_front(cnt);
                count++;
            }
        }

        dq.pop_front();
    }

    cout << count;
}