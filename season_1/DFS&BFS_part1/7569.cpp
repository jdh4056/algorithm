#include <bits/stdc++.h>
using namespace std;

int board[102][102][102];
int dist[102][102][102];
int dx[6] = {-1, 1, 0, 0, 0, 0};
int dy[6] = {0, 0, -1, 1, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1};
int M,N,H;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> M >> N >> H;

    queue<tuple<int,int,int>> q;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < M; ++k) {
                cin >> board[i][j][k];
                if (board[i][j][k] == 1) {
                    q.push({i,j,k});
                }
                if (board[i][j][k] == 0) {
                    dist[i][j][k] = -1;
                }
            }
        }
    }

    while (!q.empty()) {
        tuple<int,int,int> cur = q.front();
        q.pop();
        int z,x,y;
        tie(z,x,y) = cur;
        for (int dir = 0; dir < 6; ++dir) {
            int nz = z + dz[dir];
            int nx = x + dx[dir];
            int ny = y + dy[dir];
            if (nz < 0 || nz >= H || nx < 0 || nx >= N || ny < 0 || ny >= M)
                continue;
            if (dist[nz][nx][ny] >= 0) {
                continue;
            }
            dist[nz][nx][ny] = dist[z][x][y] + 1;
            q.push({nz,nx,ny});
        }
    }
    int result = 0;
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < N; ++j) {
            for (int k = 0; k < M; ++k) {
                if (dist[i][j][k] == -1) {
                    cout << -1;
                    return 0;
                }
                result = max(result, dist[i][j][k]);
            }
        }
    }
    cout << result;
}


