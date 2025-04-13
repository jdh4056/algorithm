#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second
vector<pair<int,int> > adj[1002];
bool vis[1002];
//int dist[1002];
int n,m;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i = 1; i < n; i++) {
        int a,b,d;
        cin >> a >> b>> d;
        adj[a].push_back({b,d});
        adj[b].push_back({a,d});
    }

    for (int i = 0; i < m; i++) {
        memset(vis,0,sizeof(vis));
        //int sum = 0;
        int a,b;
        cin >> a >> b;
        queue<pair <int, int> > q;
        vis[a] = 1;
        q.push({a,0});

        while (!q.empty()) {
            auto [cur, dist] = q.front(); q.pop();
            if (cur == b) {
                cout << dist << '\n';
                break;
            }
            for (auto [next, weight] : adj[cur]) {
                if (vis[next]) continue;
                vis[next] = 1;
                q.push({next,dist + weight});
            }
        }

    }
}
