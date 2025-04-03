#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[252][252];
bool vis[252][252];
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[8] = {-1, -1, 0, 1, 1, 1, 0, -1};

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        int w, h;
        cin >> w >> h;
        int num = 0;
        if (w == 0 && h == 0) {
            return 0;
        }

        memset(board, 0, sizeof(board));
        memset(vis, 0, sizeof(vis));

        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                cin >> board[i][j];
            }
        }

        for (int i = 0; i < h; ++i) {
            for (int j = 0; j < w; ++j) {
                if (board[i][j] == 0 || vis[i][j]) continue;

                num++;
                queue<pair<int, int>> q;
                vis[i][j] = 1;
                q.push({i,j});

                while (!q.empty()) {
                    pair<int, int> cur = q.front();
                    q.pop();
                    for (int dir = 0; dir < 8; ++dir) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
                        if (vis[nx][ny] || board[nx][ny] != 1) continue;
                        vis[nx][ny] = 1;
                        q.push({nx, ny});
                    }
                }
            }
        }
        cout << num << '\n';
    }
}