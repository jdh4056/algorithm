#include <bits/stdc++.h>
using namespace std;

int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    for (int i = 0; i < t; ++i) {
        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        unordered_map<int, int> check;
        int k;
        cin >> k;

        for (int j = 0; j < k; ++j) {
            char c;
            int n;
            cin >> c >> n;

            if (c == 'I') {

                maxHeap.push(n);
                minHeap.push(n);
                check[n]++;
            } else if (c == 'D') {
                if (n == 1) {
                    while (!maxHeap.empty() && check[maxHeap.top()] == 0) {
                        maxHeap.pop();
                    }
                    if (!maxHeap.empty()) {
                        int cnt = maxHeap.top();
                        maxHeap.pop();
                        check[cnt]--;
                    }
                } else if (n == -1) {
                    while (!minHeap.empty() && check[minHeap.top()] == 0) {
                        minHeap.pop();
                    }
                    if (!minHeap.empty()) {
                        int cnt = minHeap.top();
                        minHeap.pop();
                        check[cnt]--;
                    }
                }
            }
        }


        while (!maxHeap.empty() && check[maxHeap.top()] == 0) {
            maxHeap.pop();
        }
        while (!minHeap.empty() && check[minHeap.top()] == 0) {
            minHeap.pop();
        }

        
        if (maxHeap.empty() || minHeap.empty()) {
            cout << "EMPTY" << '\n';
        } else {
            cout << maxHeap.top() << " " << minHeap.top() << '\n';
        }
    }

    return 0;
}
