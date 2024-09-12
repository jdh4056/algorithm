#include<iostream>
#include <queue>
using namespace std;

int main() {
    int N, K;
    queue<int> q;

    cin >> N >> K;

    for (int i = 1; i <= N; ++i) {
        q.push(i);
    }

    cout << "<";
    int cnt = 1;
    while (!q.empty()) {
        if (cnt == K) {
            cout << q.front();
            q.pop();
            cnt = 1;
            if (!q.empty()) {
                cout << ", ";
            }
        } else {
            int front = 0;
            front = q.front();
            q.pop();
            q.push(front);
            cnt++;
        }
    }
    cout << ">";
}