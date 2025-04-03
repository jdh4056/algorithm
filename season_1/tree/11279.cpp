#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    priority_queue<int, vector<int>> maxHeap;

    int N;
    cin >> N;
    int a;
    for (int i = 0; i < N; ++i) {
        cin >> a;
        if (a == 0) {
            if (maxHeap.empty()) {
                cout << 0 << '\n';
            } else {
                cout << maxHeap.top() << '\n';
                maxHeap.pop();
            }
        } else {
            maxHeap.push(a);
        }
    }
}