#include<bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string board[102];
bool vis[102][102];
int dx[4] = {1,0,-1,0};
int dy[4] = {0, 1, 0, -1};
int t;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> t;
    while (t--) {
        memset(vis,0,sizeof(vis));
        int h,w; cin >> h >> w;
        int cnt = 0;
        for (int i = 0; i < h; i++) {
            cin >> board[i];
        }


        for (int i = 0; i < h; i++) {
            for (int j = 0; j< w; j++) {
                if (board[i][j] == '.' || vis[i][j]) continue;
                queue<pair<int, int> > q;
                vis[i][j] = 1;
                q.push({i,j});
                while (!q.empty()) {
                    auto cur = q.front(); q.pop();
                    for (int dir = 0; dir < 4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                        if (vis[nx][ny] || board[nx][ny] != '#') continue;
                        vis[nx][ny] = 1;
                        q.push({nx, ny});
                    }
                }
                cnt++;
            }
        }
        cout << cnt << '\n';
    }
}
