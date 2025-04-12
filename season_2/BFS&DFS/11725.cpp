#include <bits/stdc++.h>
using namespace std;

vector<int> adj[100002];
bool vis[100002];
int idx[100002];
int n;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for (int i = 1; i < n; i++) {
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }

    queue<int> q;
    vis[1] = 1;
    q.push(1);
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (int nv : adj[cur]) {
            if (vis[nv]) continue;
            idx[nv] = cur;
            vis[nv] = 1;
            q.push(nv);
        }
    }

    for (int i = 2; i <= n; i++) {
        cout << idx[i] << '\n';
    }
}