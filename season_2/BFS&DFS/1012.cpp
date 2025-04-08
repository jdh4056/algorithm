#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[2502][2502];
bool vis[2502][2502];
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        memset(board,0,sizeof(board));
        memset(vis,0,sizeof(vis));

        int m,n,k;
        cin >> m >> n >> k;
        while (k--) {
            int x,y;
            cin >> x >> y;
            board[y][x] = 1;
        }

        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (board[i][j] == 0 || vis[i][j]) continue;
                cnt++;
                queue<pair<int, int> > q;
                vis[i][j] = 1;
                q.push({i,j});
                while (!q.empty()) {
                    auto cur = q.front(); q.pop();
                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                        if (vis[nx][ny] || board[nx][ny] != 1) continue;
                        vis[nx][ny] = 1;
                        q.push({nx,ny});
                    }
                }
            }
        }
        cout << cnt << '\n';
    }
}
