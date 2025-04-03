#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    int result = 0;
    priority_queue<int, vector<int>, greater<int>> pq;
    cin >> N;

    if (N == 1) {
        cout << 0;
        return 0;
    }
    int tmp;
    for (int i = 0; i < N; ++i) {
        cin >> tmp;
        pq.push(tmp);
    }
    while (!pq.empty()) {
        int sum = 0;
        sum += pq.top();
        pq.pop();
        if (!pq.empty()) {
            sum += pq.top();
            pq.pop();
            if (!pq.empty()) {
                pq.push(sum);
            }
        }
        result += sum;
    }

    cout << result;
}