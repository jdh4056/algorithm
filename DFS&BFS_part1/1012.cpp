#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int N,M,T,K;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
int board[50][50];
bool vis[50][50];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> T;
    while (T--) {
        cin >> M >> N >> K;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                board[i][j] = 0;
                vis[i][j] = false;
            }
        }
        for (int i = 0; i < K; ++i) {
            int x,y;
            cin >> x >> y;
            board[y][x] = 1;
        }

        int num = 0;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j < M; ++j) {
                if (board[i][j] == 0 || vis[i][j])
                    continue;
                num++;
                queue<pair<int,int>> q;
                vis[i][j] = 1;
                q.push({i,j});

                while (!q.empty()) {
                    pair<int,int> cur = q.front();
                    q.pop();
                    for (int dir = 0; dir < 4; ++dir) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= N || ny < 0 || ny >= M)
                            continue;
                        if (vis[nx][ny] || board[nx][ny] != 1)
                            continue;
                        vis[nx][ny] = 1;
                        q.push({nx, ny});
                    }
                }
            }
        }
        cout << num << '\n';
    }
}