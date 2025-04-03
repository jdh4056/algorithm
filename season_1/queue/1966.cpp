#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        int qSize, fileIndex;
        cin >> qSize >> fileIndex;

        for (int j = 0; j < qSize; j++) {
            int value;
            cin >> value;
            q.push({value, i});
            pq.push(value);
        }

        int importance = 0;
        while (!q.empty()) {
            int currentImportance = q.front().first;  // pair의 first
            int currentIndex = q.front().second;    //pair의 second

            if (currentImportance == pq.top()) {
                pq.pop();
                importance++;

                if (currentIndex == fileIndex) {
                    cout << i + 1 << '\n';
                    break;
                }
            } else {
                q.push({currentImportance, currentIndex});
            }
        }
    }
}