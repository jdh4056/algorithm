#include <bits/stdc++.h>
using namespace std;

#define X first;
#define Y second;
int dist[1000000];
int F,S,G,U,D;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> F >> S >> G >> U >> D;
    fill(dist, dist + F + 1, -1);
    dist[S] = 0;
    queue<int> q;
    q.push(S);

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        if (cur == G) {
            cout << dist[G];
            return 0;
        }

        for (int nxt : {cur + U, cur - D}) {
            if (nxt < 1 || nxt > F) {
                continue;
            }
            if (dist[nxt] != -1) {
                continue;
            }
            dist[nxt] = dist[cur] + 1;
            q.push(nxt);
        }
    }
    cout << "use the stairs";
}