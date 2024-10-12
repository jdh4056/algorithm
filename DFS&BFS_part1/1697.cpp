#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second
int dist[100002];
int N, K;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N >> K;
    fill(dist, dist + 100001, -1);
    dist[N] = 0;
    queue<int> q;
    q.push(N);

    while (dist[K] == -1) {
        int cur = q.front();
        q.pop();
        for (int next : {cur - 1, cur + 1, 2 * cur}) {
            if (next < 0 || next > 100000) {
                continue;
            }
            if (dist[next] != -1) {
                continue;
            }
            dist[next] = dist[cur] + 1;
            q.push(next);
        }
    }
    cout << dist[K];
}