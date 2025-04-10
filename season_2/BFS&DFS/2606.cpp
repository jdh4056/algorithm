#include<bits/stdc++.h>
using namespace std;
vector<int> adj[102];
bool vis[102];
int n,m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a,b; cin>> a>> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int cnt = 0;
    queue<int> q;
    vis[1] = 1;
    q.push(1);
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        for (int nv : adj[cur]) {
            if (vis[nv]) continue;
            vis[nv] = 1;
            cnt++;
            q.push(nv);
        }
    }
    cout << cnt;
}