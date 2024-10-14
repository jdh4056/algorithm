#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[102][102];
int island[102][102];
int dist[102][102];
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, -1, 0, 1};
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

    int id = 0;

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (board[i][j] == 1 && island[i][j] == 0) {
                id++;
                queue<pair<int, int>> q;
                q.push({i, j});
                island[i][j] = id;

                while (!q.empty()) {
                    pair<int, int> cur = q.front();
                    q.pop();
                    for (int dir = 0; dir < 4; ++dir) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if (nx < 0 || nx >= N || ny < 0 || ny >= N)
                            continue;
                        if (board[nx][ny] == 1 && island[nx][ny] == 0) {  // 육지이면서 아직 방문 안 한 곳
                            island[nx][ny] = id;
                            q.push({nx, ny});
                        }
                    }
                }
            }
        }
    }

    int result = INT_MAX;


    for (int i = 1; i <= id; ++i) {
        queue<pair<int, int>> q;
        memset(dist, -1, sizeof(dist));

        for (int x = 0; x < N; ++x) {
            for (int y = 0; y < N; ++y) {
                if (island[x][y] == i) {
                    q.push({x, y});
                    dist[x][y] = 0;
                }
            }
        }


        while (!q.empty()) {
            pair<int, int> cur = q.front();
            q.pop();
            for (int dir = 0; dir < 4; ++dir) {
                int nx = cur.X + dx[dir];
                int ny = cur.Y + dy[dir];
                if (nx < 0 || nx >= N || ny < 0 || ny >= N)
                    continue;
                if (dist[nx][ny] == -1) {
                    dist[nx][ny] = dist[cur.X][cur.Y] + 1;
                    q.push({nx, ny});
                }

                if (island[nx][ny] != 0 && island[nx][ny] != i) {
                    result = min(result, dist[cur.X][cur.Y]);
                }
            }
        }
    }

    cout << result << '\n';
}