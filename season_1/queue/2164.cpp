#include <bits/stdc++.h>

using namespace std;

int main() {
    queue<int> q;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        q.push(i);
    }

    for (int i = 0; i < n - 1; i++) {
        q.pop();
        int frontData = 0;
        frontData = q.front();
        q.pop();
        q.push(frontData);
    }
    cout << q.front();


}