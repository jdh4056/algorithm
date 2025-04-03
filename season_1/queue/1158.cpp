#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;
    int N, K;
    cin >> N >> K;

    for (int i = 1; i <= N; i++) {
        q.push(i);
    }

    int compareNum = 1;
    int count = 0;
    cout << "<";
    while (!q.empty()) {
        if (compareNum == K) {
            cout << q.front();
            q.pop();
            compareNum = 1;
            count++;
            if (!q.empty()) {
                cout << ", ";
            }
        } else {
            int frontData = 0;
            frontData = q.front();
            q.pop();
            q.push(frontData);
            compareNum++;
        }
    }
    cout << ">";
}
