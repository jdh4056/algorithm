#include <bits/stdc++.h>
using namespace std;
vector<int> adj[1001];
bool vis[1001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n,m,v;
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++) {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    for (int i = 1; i <= n; i++) {
        sort(adj[i].begin(), adj[i].end());
    }

    stack<int> st;
    //vis[v] = 1;
    st.push(v);
    while (!st.empty()) {
        int cur = st.top(); st.pop();
        if (vis[cur]) continue;
        vis[cur] = true;
        cout << cur << " ";
        for (int i = adj[cur].size() - 1; i >= 0; i--) {
            int nv = adj[cur][i];
            if (!vis[nv]) st.push(nv);
        }
    }

    cout << '\n';


    memset(vis,0,sizeof(vis));
    queue<int> q;
    vis[v] = 1;
    q.push(v);
    while (!q.empty()) {
        int cur = q.front(); q.pop();
        cout << cur << " ";
        for (int nv : adj[cur]) {
            if (vis[nv]) continue;
            vis[nv] = true;
            q.push(nv);
        }
    }
}