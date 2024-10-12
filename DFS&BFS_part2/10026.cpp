#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
char board[100][100];
bool vis[100][100];
int dx[4] = {-1,0,1,0};
int dy[4] = {0,-1,0,1};
int N;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> board[i][j];
        }
    }

    int colorA = 0;
    int colorB = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (vis[i][j])
                continue;
            colorA++;
            queue<pair<int, int>> q;
            vis[i][j] = 1;
            q.push({i,j});

            while (!q.empty()) {
                pair<int,int> cur = q.front();
                q.pop();
                for (int dir = 0; dir < 4; ++dir) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= N)
                        continue;
                    if (vis[nx][ny] || board[nx][ny] != board[cur.X][cur.Y])
                        continue;
                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
    }
    memset(vis,0, sizeof(vis));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (board[i][j] == 'G') {
                board[i][j] = 'R';
            }
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (vis[i][j])
                continue;
            colorB++;
            queue<pair<int, int>> q;
            vis[i][j] = 1;
            q.push({i,j});

            while (!q.empty()) {
                pair<int,int> cur = q.front();
                q.pop();
                for (int dir = 0; dir < 4; ++dir) {
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if (nx < 0 || nx >= N || ny < 0 || ny >= N)
                        continue;
                    if (vis[nx][ny] || board[nx][ny] != board[cur.X][cur.Y])
                        continue;
                    vis[nx][ny] = 1;
                    q.push({nx, ny});
                }
            }
        }
    }
    cout << colorA << " " << colorB;
}