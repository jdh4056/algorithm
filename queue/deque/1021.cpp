#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    deque<int> circleQueue;

    for (int i = 0; i < N; ++i) {
        circleQueue.push_back(i + 1);
    }

    int count = 0;
    int total = 0;
    for (int i = 0; i < M; ++i) {
        int num;
        cin >> num;

        for (int j = 0; i < circleQueue.size(); ++j) {
            if (num == circleQueue[j]) {
                count = j;
                break;
            }
        }

        int left = count;
        int right = circleQueue.size() - count;

        total += min(left, right);

        circleQueue.erase(circleQueue.begin() + count);
    }

    // 1 3 4 5 6 7 8 10
    cout << total;
}